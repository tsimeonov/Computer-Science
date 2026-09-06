/*
Flag-controlled while loop
Number guessing game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     // Declare the variables
     // Variable to store the random number
     int num;
     // Variable to store the number guessed by the user
     int guess;
     // boolean variable to control the loop
     bool isGuessed;

     srand(time(0));

     num = rand() % 100;
     cout << "The NUM is " << num << endl;

     isGuessed = false;

     while (!isGuessed)
     {
          cout << "Enter an integer greater"
               << " than or equal to 0 and"
               << "less than 100: ";

          cin >> guess;
          cout << endl;

          if (guess == num)
          {
               cout << "You guessed the correct "
                    << "number." << endl;
               isGuessed = true;
          }
          else if (guess < num)
          {
               cout << "Your guess is lower than the "
                    << "number. \n Guess again!"
                    << endl;
          }
          else
          {
               cout << "Your guess is higher than "
                    << "the number. \n Guess again!"
                    << endl;
          }
     }

     return 0;
}

/*
logic circuit is an interconnected network of logic gates that process binary signals to perform automated decisions nad processes

logic circuit is an interconnected network of logic gates tha process binary signals to perform automated decisions and processes

logic circuit is an interconnected network of logical gates tha process binary signals to perfrom automated decisions and computations

logic circuit is an interconnected network of logical gates that process binaty signals to perform automated decisions and computations

logic circuit is an interconnected network of logical gates that process binary signals to perform automated decisions and computations

logic gates is an interconnected netwrok og logical gates that process binary signals to perform automated decisions and computations

logic gates is an interconnected network of logical gates that process binary signals to perform automated decions and computation
*/