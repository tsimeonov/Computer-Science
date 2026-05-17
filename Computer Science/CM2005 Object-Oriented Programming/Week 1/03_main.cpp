// Refactor code from 02_main.cpp

// Refactor code from 01_main.cpp

#include <iostream>

void printMenu()
{
  std::cout << "=====================" << std::endl;
  std::cout << "1: Print help" << std::endl;
  std::cout << "2: Print exchange stats" << std::endl;
  std::cout << "3: Place an ask" << std::endl;
  std::cout << "4: Place a bid" << std::endl;
  std::cout << "5: Print wallet" << std::endl;
  std::cout << "6: Continue" << std::endl;

  std::cout << "=====================" << std::endl;
}

int getUserOption()
{
  int userOption;

  std::cout << "Type in 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose: " << userOption << std::endl;

  return userOption;
}

void printHelp()
{
  std::cout << "Help - choose options from the menu" << std::endl;
  std::cout << "and follow the on screen instructions" << std::endl;
}

void printMarketStats()
{
  std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
  std::cout << "Make an offer - enter amount" << std::endl;
}

void enterBid()
{
  std::cout << "Make a bid - enter amount" << std::endl;
}

void printWallet()
{
  std::cout << "Yot wallet is empty" << std::endl;
}

void gotoNextTimeFrame()
{
  std::cout << "Going to next time frame" << std::endl;
}

void processUserOption(int userOption)
{
  if (userOption == 1)
  {
    printHelp();
  }
  if (userOption == 2)
  {
    printMarketStats();
  }
  if (userOption == 3)
  {
    enterOffer();
  }
  if (userOption == 4)
  {
    enterBid();
  }
  if (userOption == 5)
  {
    printWallet();
  }
  if (userOption == 6)
  {
    gotoNextTimeFrame();
  }
  if (userOption < 1 || userOption > 6)
  {
    std::cout << "Invalid choice. Choose 1 -6" << std::endl;
  }
}

int main()
{
  while (true)
  {
    printMenu();

    int userOption = getUserOption();

    processUserOption(userOption);
  }
  return 0;
}