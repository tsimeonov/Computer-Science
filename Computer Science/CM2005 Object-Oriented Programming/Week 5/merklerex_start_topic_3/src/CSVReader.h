
#pragma once
#include "OrderBookEntry.h"
#include <iostream>
#include <vector>

using namespace std;

class CSVReader
{
public:
  CSVReader();

  vector<OrderBookEntry> readCSV(string csvFile);
}