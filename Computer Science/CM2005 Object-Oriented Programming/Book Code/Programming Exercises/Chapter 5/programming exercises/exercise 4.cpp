#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
 // Variables
 string letters;

 cout << "Enter a telephone number expressed in letters: ";
 cin >> letters;
 cout << endl;

 while (letters != "#")
 {

  int limit = letters.size();

  // Enforce the maximum limit of 7
  if (limit > 7)
  {
   limit = 7;
  }

  for (int i = 0; i < limit; i++)
  {

   char upper = toupper(letters[i]);
   int digit = 0;

   if (upper == 'A' || upper == 'B' || upper == 'C')
   {
    digit = 2;
   }
   else if (upper == 'D' || upper == 'E' || upper == 'F')
   {
    digit = 3;
   }
   else if (upper == 'G' || upper == 'H' || upper == 'I')
   {
    digit = 4;
   }
   else if (upper == 'J' || upper == 'K' || upper == 'L')
   {
    digit = 5;
   }
   else if (upper == 'M' || upper == 'N' || upper == 'O')
   {
    digit = 6;
   }
   else if (upper == 'P' || upper == 'Q' || upper == 'R' || upper == 'S')
   {
    digit = 7;
   }
   else if (upper == 'T' || upper == 'U' || upper == 'V')
   {
    digit = 8;
   }
   else if (upper == 'W' || upper == 'X' || upper == 'Y' || upper == 'Z')
   {
    digit = 9;
   }

   cout << digit;

   // Add the hyphen
   if (i == 2 && limit > 3)
   {
    cout << "-";
   }
  }
  cout << endl;

  cout << "\nEnter another telephone number (or # to stop): ";
  cin >> letters;
  cout << endl;
 }

 return 0;
}