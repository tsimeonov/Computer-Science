#include "OrderBook.h"
#include "CSVReader.h"

using namespace std;

// construct, reading a csv data file
OrderBook::OrderBook(string fileName)
{
  CSVReader::readCSV(fileName);
}

// return vector of all known products in the dataset
vector<string> OrderBook::getKnownProducts()
{
  vector<string> products;
  return products;
}

// return vector of Orders according to the sent filters
vector<OrderBookEntry> OrderBook::getOrders(OrderBookType type, string product, string timestamp)
{
  vector<OrderBookEntry> orders_sub;
  return orders_sub;
}