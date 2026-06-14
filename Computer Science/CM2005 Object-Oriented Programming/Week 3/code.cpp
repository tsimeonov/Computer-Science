// Refactor code from 02_main.cpp

// Refactor code from 01_main.cpp

#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

int main()
{
  MerkelMain app{};
  app.init();

  // std::vector<OrderBookEntry> orders;

  // orders.push_back(OrderBookEntry{1000, 0.02, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});
  // orders.push_back(OrderBookEntry{2000, 0.04, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});

  // std::cout
  //     << "The price is " << orders[0].price << std::endl;

  // // Call by reference (example 1)
  // for (OrderBookEntry order : orders)
  // {
  //   std::cout << "The price is " << order.price << std::endl;
  // }

  // // Iterate over a vector (example 2)
  // for (unsigned int i = 0; i < orders.size(); ++i)
  // {
  //   std::cout << "The price is " << orders[i].price << std::endl;
  // }

  // // Iterate over a vector (example 3)
  // for (unsigned int i = 0; i < orders.size(); ++i)
  // {
  //   std::cout << "The price is " << orders.at(i).price << std::endl;
  // }
}