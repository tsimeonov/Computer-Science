
#pragma once
#include "OrderBookEntry.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CSVReader
{
public:
  CSVReader();

  static vector<OrderBookEntry> readCSV(string csvFile);
  static vector<string> tokenise(string csvLine, char separator);

private:
  static OrderBookEntry stringsToOBE(vector<string> strings);
};