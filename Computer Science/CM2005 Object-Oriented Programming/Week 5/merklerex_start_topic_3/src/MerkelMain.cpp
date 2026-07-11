#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"

using namespace std;

MerkelMain::MerkelMain()
{
}

void MerkelMain::init()
{

    int input;
    currentTime = OrderBook.getEarliestTime();
    while (true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void MerkelMain::printMenu()
{
    // 1 print help
    cout << "1: Print help " << endl;
    // 2 print exchange stats
    cout << "2: Print exchange stats" << endl;
    // 3 make an offer
    cout << "3: Make an offer " << endl;
    // 4 make a bid
    cout << "4: Make a bid " << endl;
    // 5 print wallet
    cout << "5: Print wallet " << endl;
    // 6 continue
    cout << "6: Continue " << endl;

    cout << "============== " << endl;

    cout << "Current time is: " << currentTime << endl;
}

void MerkelMain::printHelp()
{
    cout << "Help - your aim is to make money. Analyse the market and make bids and offers. " << endl;
}

void MerkelMain::printMarketStats()
{

    for (string const &p : OrderBook.getKnownProducts())
    {
        cout << "Product:  " << p << endl;
        vector<OrderBookEntry> entries = OrderBook.getOrders(OrderBookType::ask, p, currentTime);
        cout << "Asks seen: " << entries.size() << endl;
        cout << "Max ask: " << OrderBook::getHighPrice(entries) << endl;
        cout << "Min ask: " << OrderBook::getLowPrice(entries) << endl;
    }

    // std::cout << "OrderBook contains :  " << orders.size() << " entries" << std::endl;

    // unsigned int bids = 0;
    // unsigned int asks = 0;
    // for (OrderBookEntry &e : orders)
    // {
    //     if (e.orderType == OrderBookType::ask)
    //     {
    //         asks++;
    //     }
    //     if (e.orderType == OrderBookType::bid)
    //     {
    //         bids++;
    //     }
    // }

    // std::cout << "OrderBook asnks:  " << asks << " bids: " << bids << std::endl;
}

void MerkelMain::enterAsk()
{
    cout << "Make an ask - enter the amount: product, price, amount, eg ETH/BTC,200,0.5 " << endl;
    string input;
    getline(cin, input);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> tokens = CSVReader::tokenise(input, ',');
    if (tokens.size() != 3)
    {
        cout << "Bad input! " << input << endl;
    }
    else
    {
        OrderBookEntry obe = CSVReader::stringsToOBE(
            tokens[1],
            tokens[2],
            currentTime,
            tokens[0],
            OrderBookType::ask);
    }

    cout << "You typed: " << input << endl;
}

void MerkelMain::enterBid()
{
    cout << "Make a bid - enter the amount" << endl;
}

void MerkelMain::printWallet()
{
    cout << "Your wallet is empty. " << endl;
}

void MerkelMain::gotoNextTimeframe()
{
    cout << "Going to next time frame. " << endl;
    currentTime = OrderBook.getNextTime(currentTime);
}

int MerkelMain::getUserOption()
{
    int userOption;

    cout << "Type in 1-6" << endl;
    cin >> userOption;
    cout << "You chose: " << userOption << endl;
    return userOption;
}

void MerkelMain::processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        cout << "Invalid choice. Choose 1-6" << endl;
    }
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
        enterAsk();
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
        gotoNextTimeframe();
    }
}
