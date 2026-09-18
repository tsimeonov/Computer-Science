/*
Telephone digits
*/

#include <iostream>
#include <cctype> // for toupper()

using namespace std;

int main()
{

 char letter;
 int digit;

 cout << "Program to convert uppercase letters to "
      << "their corresponding telephone digits."
      << endl;

 cout << "To stop the program enter #. " << endl;

 cout << "Enter an uppercase or lower case letter: ";
 cin >> letter;
 cout << endl;

 while (letter != '#')
 {

  // Convert lowercase to uppercase for unifomr processing
  char upper = toupper(letter);

  cout << "Letter: " << letter;
  cout << ", Corresponding telephone digit: ";

  if (upper >= 'A' && upper <= 'Z')
  {
   if (upper <= 'C')
   {
    digit = 2;
   }
   else if (upper <= 'F')
   {
    digit = 3;
   }
   else if (upper <= 'I')
   {
    digit = 4;
   }
   else if (upper <= 'L')
   {
    digit = 5;
   }
   else if (upper <= 'O')
   {
    digit = 6;
   }
   else if (upper <= 'S')
   {
    digit = 7;
   }
   else if (upper <= 'V')
   {
    digit = 8;
   }
   else
   {
    digit = 9;
   }

   cout << digit << endl;
  }
  else
  {
   cout << "Invalid input" << endl;
  }

  cout << "\nEnter another lowercase or uppercase "
       << "letter to find its corresponsing "
       << "telephone digit" << endl;
  cout << "To stop the program enter #." << endl;

  cout << "Enter a letter: ";
  cin >> letter;
  cout << endl;
 }

 return 0;
}

/*
Sample Run: In this sample run, the user input is shaded.
Program to convert uppercase letters to their corresponding telephone
digits.
To stop the program enter #.
Enter a letter: A
Letter: A, Corresponding telephone digit: 2
Enter another uppercase letter to find its corresponding telephone digit.
To stop the program enter #.
Enter a letter: M
Letter: M, Corresponding telephone digit: 6

Enter another uppercase letter to find its corresponding telephone digit.
To stop the program enter #.
Enter a letter: Q
Letter: Q, Corresponding telephone digit: 7
Enter another uppercase letter to find its corresponding telephone digit.
To stop the program enter #.
Enter a letter: V
Letter: V, Corresponding telephone digit: 8
Enter another uppercase letter to find its corresponding telephone
digit.
To stop the program enter #.
Enter a letter: Y
Letter: Y, Corresponding telephone digit: 9
Enter another uppercase letter to find its corresponding telephone digit.
To stop the program enter #.
Enter a letter: #
*/
