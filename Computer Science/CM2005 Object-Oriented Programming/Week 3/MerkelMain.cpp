#include "MerkelMain.h"
#include <iostream>

void MerkelMain() {}

void MerkelMain::init() {}

void MerkelMain::printMenu()
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

void MerkelMain::printHelp()
{
  std::cout << "Help - choose options from the menu" << std::endl;
  std::cout << "and follow the on screen instructions" << std::endl;
}

void MerkelMain::printMarketStats()
{
  std::cout << "Market looks good" << std::endl;
}

void MerkelMain::enterOffer()
{
  std::cout << "Make an offer - enter amount" << std::endl;
}

void MerkelMain::enterBid()
{
  std::cout << "Make a bid - enter amount" << std::endl;
}

void MerkelMain::printWallet()
{
  std::cout << "Yot wallet is empty" << std::endl;
}

void MerkelMain::gotoNextTimeFrame()
{
  std::cout << "Going to next time frame" << std::endl;
}

int MerkelMain::getUserOption()
{
  int userOption;

  std::cout << "Type in 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose: " << userOption << std::endl;

  return userOption;
}

void MerkelMain::processUserOption(int userOption)
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