#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>

using namespace std;

class OrderBook
{

public:
  // construct, reading a csv data file
  OrderBook(string fileName);
  // return vector of all known products in the dataset
  vector<string> getKnownProducts();
  // return vector of Orders according to the sent filters
  vector<OrderBookEntry> getOrders(OrderBookType type, string product, string timestamp);
};