
#pragma once
#include "OrderBookEntry.h"
#include <iostream>
#include <vector>

using namespace std;

class CSVReader
{
public:
  CSVReader();

  static vector<OrderBookEntry> readCSV(string csvFile);

private:
  static vector<string> tokenise(string csvLine, char separator);
  OrderBookEntry stringToOBE(vector<string> strings);
};