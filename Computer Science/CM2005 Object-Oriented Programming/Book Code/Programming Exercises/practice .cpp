#include <iostream>
#include <cctype> // for topper()

using namespace std;

int main()
{

 char letter;
 int digit;

 cout << "------" << endl;

 cout << "This is a program to convert letters to \ntheir corresponding telephone digits" << endl;
 cout << "------" << endl;

 cout << "To stop the program type #." << endl;

 cout << "------" << endl;

 cout << "Enter a letter: ";
 cin >> letter;
 cout << endl;

 while (letter != '#')
 {
  // Convert lowercase to uppercase
  char upper = toupper(letter);

  if (upper >= 'A' && upper <= 'Z')
  {
  }
  else
  {

   cout << "Invalid input" << endl;
  }

  cout << "\nEnter another letter" << endl;

  cout << "Enter a letter: " << endl;
  cin >> letter;
  cout << endl;
 }

 return 0;
}