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

OrderBookEntry CSVReader::stringToOBE(vector<string> tokens)
{

  if (tokens.size() != 5) // bad
  {
    cout << "Bad line" << endl;
    continue;
  }
  // We have 5 tokens
  try
  {
    double price = stod(tokens[3]);
    double price = stod(tokens[4]);
    cout << price << ":" << amount << endl;
  }
  catch (exception &e)
  {
    cout << "Bad float! " << tokens[3] << endl;
    cout << "Bad float! " << tokens[4] << endl;
    break;
  }

  OrderBookEntry obe{1, 1, "", "", OrderBookType::bid};

  return obe;
}