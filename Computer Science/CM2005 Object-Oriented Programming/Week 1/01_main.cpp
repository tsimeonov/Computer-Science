#include <iostream>

int main()
{

  // Step 1: Create and infinite loop to repeaatedly display the menu
  while (true)
  {
    // Step 2: Print the menu to the user
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;

    // Step 3: Declare variable to store the user input
    int userOption;

    // Step 4: Promp the user to enter their choice
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;

    // Step 5: Process user choice using confitional statements
    if (userOption == 1)
    {
      std::cout << "Help - choose options from the menu" << std::endl;
      std::cout << "and follow the on screen instructions" << std::endl;
    }
    if (userOption == 2)
    {
      std::cout << "Market looks good" << std::endl;
    }
    if (userOption == 3)
    {
      std::cout << "Make an offer - enter amount" << std::endl;
    }
    if (userOption == 4)
    {
      std::cout << "Make a bid - enter amount" << std::endl;
    }
    if (userOption == 5)
    {
      std::cout << "Yot wallet is empty" << std::endl;
    }
    if (userOption == 6)
    {
      std::cout << "Going to next time frame" << std::endl;
    }
    // Step 6: Handle invalid inout outside the 1-6 range
    else
    {
      std::cout << "Invalid choice. Choose 1 -6" << std::endl;
    }
  }

  // Step 7: Return 0 tp indicate program termination (though loop is infinite)
  return 0;
}