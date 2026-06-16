#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
  // string vector tokens ## stores the tokens
  std::vector<std::string> tokens;

  // int start, end ## used to delineate the position of the tokens
  signed int start, end;

  // start = csvLine.find_first_not_of(setarator)
  start = csvLine.find_first_not_of(separator, 0);
  // do
  // end = next "separator" after start
  //   if start == csvLine.length or start == end ## noting more to find
  //     break
  //   if end >= 0 # we found the separator
  //     token  csvLine.substr(start, end - start) ## start, substring length
  //   else
  //     token = scvLine.substr(start, csvLine.length - start) ## end is invalid

  //   token.push_back(token) ## save the token
  //   start = end + 1 ## move past this token

  // while (end > 0) ## continue loop condition

  return tokens;
}

int main()
{

  return 0;
}
