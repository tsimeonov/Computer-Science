#include "OrderBook.h"
#include "CSVReader.h"
#include <map>

using namespace std;

// construct, reading a csv data file
OrderBook::OrderBook(string fileName)
{
  orders = CSVReader::readCSV(fileName);
}

// return vector of all known products in the dataset
vector<string> OrderBook::getKnownProducts()
{
  vector<string> products;

  map<string, bool> prodMap;

  for (OrderBookEntry &e : orders)
  {
    prodMap[e.product] = true;
  }

  // now flatten the map to a vector of stings
  for (auto const &e : prodMap)
  {
    products.push_back(e.first);
  }

  return products;
}

// return vector of Orders according to the sent filters
vector<OrderBookEntry> OrderBook::getOrders(OrderBookType type, string product, string timestamp)
{
  vector<OrderBookEntry> orders_sub;

  for (OrderBookEntry &e : orders)
  {
    if (e.orderType == type && e.product == product && e.timestamp == timestamp)
    {
      orders_sub.push_back(e);
    }
  }

  return orders_sub;
}

double OrderBook::getHighPrice(vector<OrderBookEntry> &orders)
{

  // Safety check
  if (orders.empty())
    return 0.0;

  double max = orders[0].price;
  for (OrderBookEntry &e : orders)
  {
    if (e.price > max)
    {
      max = e.price;
    }
  }

  return max;
}

double OrderBook::getLowPrice(vector<OrderBookEntry> &orders)
{

  // Safety check
  if (orders.empty())
    return 0.0;

  double min = orders[0].price;
  for (OrderBookEntry &e : orders)
  {
    if (e.price < min)
    {
      min = e.price;
    }
  }

  return min;
}

string OrderBook::getEarliestTime()
{
  // Safety check
  if (orders.empty())
    return "Unknown";
  return orders[0].timestamp;
}

string OrderBook::getNextTime(string timestamp)
{
  // Safety check
  if (orders.empty())
    return "Unknown";

  string next_timestamp = "";
  for (OrderBookEntry &e : orders)
  {
    if (e.timestamp > timestamp)
    {
      next_timestamp = e.timestamp;
      break;
    }
  }

  if (next_timestamp == "")
  {
    next_timestamp = orders[0].timestamp;
  }

  return next_timestamp;
}

vector<OrderBook::OHLCEntry> OrderBook::getOHLCData(OrderBookType type, string product, string startDate, string endDate)
{
  // A map to group orders by their Date string (YYYY/MM/DD)
  map<string, vector<OrderBookEntry>> ordersByDate;

  for (OrderBookEntry &e : orders)
  {
    // Filter by type and product
    if (e.orderType == type && e.product == product)
    {
      // Extract the date (first 10 characters of "YYYY/MM/DD HH:MM:SS.mmm")
      string date = e.timestamp.substr(0, 10);

      // Apply date range filters if the user provided them
      if ((startDate == "" || date >= startDate) && (endDate == "" || date <= endDate))
      {
        ordersByDate[date].push_back(e);
      }
    }
  }

  vector<OHLCEntry> ohlcData;

  // Calculate OHLC for each date group
  for (auto const &pair : ordersByDate)
  {
    string date = pair.first;
    vector<OrderBookEntry> dayOrders = pair.second;

    if (dayOrders.empty())
      continue;

    // Assuming chronological order in CSV, Open is first, Close is last.
    double open = dayOrders.front().price;
    double close = dayOrders.back().price;

    // Use your existing High/Low functions for the rest!
    double high = OrderBook::getHighPrice(dayOrders);
    double low = OrderBook::getLowPrice(dayOrders);

    ohlcData.push_back({date, open, high, low, close});
  }

  return ohlcData;
}