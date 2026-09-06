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
logic gate - logic element that performs a logical operation on one or more bits to produce an output bit

logic gate is a logic element that performs a logical operationon one or more bits to produce an output

logicgate is a logic element that performs a logical operation on one or more bits to produce an output

logic gates is an logical element that performs a logical operation on one or more bits to produce an output bit

logic gate is an logic element that performs a logical operation on one or more bits to produce an output

logic gate is an logical element tha performs a logical operation o one or more bits to produce an ooutput

logic gate is a logical element that performs alogical operation on one or more its to produce an output
*/