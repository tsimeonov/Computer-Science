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
a logica gate is a logic element that performs a logical operation on oneor more bits to produce an putput
a logic gate is a logical element that performs a logical operation on one or more bits to produce an output
a logic gate is an logical element that performs a logical operation on one or more elements
a logical gate is a logical element that performs a logical operation on one ormore bits
a logical gate is a logical element that performs a logical operation on one or more bits
*/