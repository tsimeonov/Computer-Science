#include "CSVReader.h"

using namespace std;

CSVReader::CSVReader()
{
}

vector<OrderBookEntry> CSVReader::readCSV(string csvFile)
{
  vector<OrderBookEntry> entries;
  return entries;
}

vector<string> CSVReader::tokenise(string csvLine, char separator)
{
  vector<string> tokens;
  return tokens;
}

OrderBookEntry CSVReader::stringToOBE(vector<string> strings)
{
  OrderBookEntry obe{1, 1, "", "", OrderBookType::bid};

  return obe;
}