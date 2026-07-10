#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>

using namespace std;

class OrderBook
{

public:
  construct, reading a csv data file
             OrderBook(string fileName);
  // return vector of all known products in the dataset
  vector<string> getKnownProducts();
  // return vector of Orders according to the sent filters
  vector<OrderBookEntry> getOrders(OrderBookType type, string product, string timestamp);

  /** returns the earliest time in the orderbook */
  string getEarliestTime();

  /** returns the next time after the sent time in the orderbook */
  string getNextTime(string timestamp);

  static double getHighPrice(vector<OrderBookEntry> &orders);
  static double getLowPrice(vector<OrderBookEntry> &orders);

private:
  vector<OrderBookEntry> orders;
};