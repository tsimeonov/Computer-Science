#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
  // string vector tokens ## stores the tokens
  std::vector<std::string> tokens;

  // int start, end ## used to delineate the position of the tokens
  signed int start, end;
  std::string token;

  // start = csvLine.find_first_not_of(setarator)
  start = csvLine.find_first_not_of(separator, 0);
  // do
  do
  {
    // end = next "separator" after start
    end = csvLine.find_first_of(separator, start);
    // if start == csvLine.length or start == end ## noting more to find
    if (start == csvLine.length() || start == end)
      // break
      break;
    // if end >= 0 # we found the separator
    if (end >= 0)
      token = csvLine.substr(start, end - start);
    // token  csvLine.substr(start, end - start) ## start, substring length
    // else
    else
      token = csvLine.substr(start, csvLine.length() - start);
    // token = csvLine.substr(start, csvLine.length - start) ## end is invalid
    // token.push_back(token) ## save the token
    tokens.push_back(token);
    // start = end + 1 ## move past this token
    start = end + 1;
  }
  // while (end > 0) ## continue loop condition
  while (end != std::string::npos);

  return tokens;
}

int main()
{
  // std::vector<std::string> tokens;
  // std::string s = "2020/03/17 17:01:24.884492,ETH/BTC,bid,0.0217499,0.04644343";

  // tokens = tokenise(s, ',');

  // for (std::string &t : tokens)
  // {
  //   std::cout << t << std::endl;
  // }

  std::ifstream csvFile{"data.csv"};
  std::string line;

  if (csvFile.is_open())
  {
    std::cout << "File open " << std::endl;
    std::getline(csvFile, line);
    std::cout << "Read line " << line << std::endl;

    csvFile.close();
  }
  else
  {
    std::cout << "Could not open file " << std::endl;
  }

  return 0;
}
