#include <iostream>

int main () {

  while (true ) {

// 1. Print help
std::cout << "1: Print help" << std::endl;

// 2. Print exchange stats
std::cout << "2. Print exchange stats"<< std::endl;

// 3. Make an offer
std::cout << "3. Make an offer"<< std::endl;

// 4. Make a bid
std::cout << "4. Make a bid"<< std::endl;

// 5. Print wallet
std::cout << "5. Print wallet"<< std::endl;

// 6. Continue
std::cout << "6. Continue"<< std::endl;

std::cout << "======================"<< std::endl;
std::cout << "Type number between 1 - 6"<< std::endl;

int userOption;

std::cin >> userOption;
std::cout << "You chose : " << userOption << std::endl;

if (userOption == 0) // bad input
{
  std::cout << "Invalid choice. Choose 1 - 6" << std::endl;
} 
if (userOption == 1) // bad input
{
  std::cout << "Help - your aim is to make money. Analyze the market and make bods and offers" << std::endl;
} 
if (userOption == 2) // bad input
{
  std::cout << "Market looks good" << std::endl;
} 
if (userOption == 3) // bad input
{
  std::cout << "Make an offer - enter amount" << std::endl;
} 
if (userOption == 4) // bad input
{
  std::cout << "Make a bid - enter anount" << std::endl;
} 
if (userOption == 5) // bad input
{
  std::cout << "Your wallet is empty" << std::endl;
} 
if (userOption == 6) // bad input
{
  std::cout << "Going to next time frame" << std::endl;
} 
std::cout << "======================"<< std::endl;
}
}