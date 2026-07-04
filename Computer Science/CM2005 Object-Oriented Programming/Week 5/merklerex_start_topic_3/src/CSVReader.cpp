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

  std::vector<std::string> tokens;
  signed int start, end;
  std::string token;
  start = csvLine.find_first_not_of(separator, 0);
  do
  {
    end = csvLine.find_first_of(separator, start);
    if (start == csvLine.length() || start == end)

      break;
    if (end >= 0)
      token = csvLine.substr(start, end - start);

    else
      token = csvLine.substr(start, csvLine.length() - start);

    tokens.push_back(token);

    start = end + 1;
  }

  while (end != std::string::npos);

  return tokens;
}

OrderBookEntry CSVReader::stringToOBE(vector<string> tokens)
{
  double price, amount;

  if (tokens.size() != 5) // bad
  {
    cout << "Bad line" << endl;
    throw exception{};
  }
  // We have 5 tokens
  try
  {
    double price = stod(tokens[3]);
    double amount = stod(tokens[4]);
    cout << price << ":" << amount << endl;
  }
  catch (const exception &e)
  {
    cout << "Bad float! " << tokens[3] << endl;
    cout << "Bad float! " << tokens[4] << endl;
    throw;
  }

  OrderBookEntry obe{price, amount, tokens[0], tokens[1], OrderBookEntry::stringToOrderBookType(tokens[2])};

  return obe;
}