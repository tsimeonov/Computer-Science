#include <iostream>

using namespace std;

int main()
{
 // Varialbes
 double basePriceColonial, areaColonoal, sqColonial;
 double basePriceSplit, areaSplit, sqSplit;
 double basePriceSingle, areaSingle, sqSingle;

 // Ask for input
 cout << "What are the prices for colonial, split-entry and single story: ";
 cin >> basePriceColonial >> basePriceSplit >> basePriceSingle;
 cout << endl;

 cout << "What is the area for colonial, split-entry and single story: ";
 cin >> areaColonoal >> areaSplit >> areaSingle;
 cout << endl;

 // calculations
 sqColonial = basePriceColonial / areaColonoal;
 sqSplit = basePriceSplit / areaSplit;
 sqSingle = basePriceSingle / areaSingle;

 // sqColonial = 1000;
 // sqSplit = 1500;
 // sqSingle = 500;

 cout << "sq colonial: " << sqColonial << endl;
 cout << "sq Split: " << sqSplit << endl;
 cout << "sq Single: " << sqSingle << endl;

 if (sqColonial <= sqSplit && sqColonial <= sqSingle)
 {
  cout << "Colonial is the cheapest: " << sqColonial << endl;
 }
 if (sqSplit <= sqColonial && sqSplit <= sqSingle)
 {
  cout << "Split-entry is the cheapest: " << sqSplit << endl;
 }
 if (sqSingle <= sqColonial && sqSingle <= sqSplit)
 {
  cout << "Single-story is the cheapest: " << sqSingle << endl;
 }

 return 0;
}
