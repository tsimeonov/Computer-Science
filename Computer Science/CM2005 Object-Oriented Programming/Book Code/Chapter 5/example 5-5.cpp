/*
Program: Telephone digits
This is an example of a sentinel-controlled loop.
This program converts uppercase letters to their correxponsing telephone digits
*/

#include <iostream>

using namespace std;

int main()
{
 char letter;
 int digit, num;

 cout << "Program to convert uppercase letters to "
      << "their corresponding telephone digits."
      << endl;

 cout << "To stop the program enter #." << endl;

 cout << "Enter the uppercase letter: ";
 cin >> letter;
 cout << endl;

 while (letter != '#')
 {
  cout << "Letter: " << letter;
  cout << ", Corresponding telephone digit: ";

  num = static_cast<int>(letter) - static_cast<int>('A');

  if (0 <= num && num < 26)
  {

   digit = (num / 3) + 2;

   if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0))
   {
    digit = digit - 1;
   }
   if (digit > 9)
   {
    digit = 9;
   }
   cout << digit << endl;
  }
  else
  {
   cout << "Invalid input" << endl;
  }

  cout << "\nEnter another uppercase "
       << "letter to find its corresponding "
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