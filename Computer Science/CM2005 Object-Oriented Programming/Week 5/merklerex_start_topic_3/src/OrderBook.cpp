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