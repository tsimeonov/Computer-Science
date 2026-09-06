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
A proposition that is always true

Contradiction
A compund propostion tht is always false
a compound propostion that is always false
a compound propostion that is always false
a compound propostion that is always false
a compound propostion that is always false
a compound propostion that is always false

contingency
A compound propostion that is sometimes true and sometimes false
a compound propostion that is sometime true an sometimes false
a compound propostion that is sometimes tur and sometimes false
a compound proposition that is sometimes true ans sometimes false

A proposition
A statement that is true or false
a statementthat is true or false
a proposition that is true or false
a proposition that is true or false
*/