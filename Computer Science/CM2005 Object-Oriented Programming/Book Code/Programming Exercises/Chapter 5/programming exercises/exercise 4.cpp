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

 cout << "Letters: " << letters << endl;

 // Determine how many letters to process (max 7)
 int limit = letters.size();
 if (limit > 7)
 {
  limit = 7;
 }

 for (int i = 0; i < limit; i++)
 {
  cout << letters[i];

  // add a hyphen after every 3rd word. but not at the end of the printed woed
  if ((i + 1) % 3 == 0 && i != limit - 1)
  {
   cout << "-";
  }
 }

 cout << endl;

 return 0;
}