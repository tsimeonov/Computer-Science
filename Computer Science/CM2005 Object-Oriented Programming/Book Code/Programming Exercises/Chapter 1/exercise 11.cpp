#include <iostream>

using namespace std;

int main()
{
  double capacity;
  double milerPerGalon;
  double result;

  cout << "What is the fuel capacity" << endl;
  cin >> capacity;

  cout << "How many miles/gallon" << endl;
  cin >> milerPerGalon;

  result = capacity * milerPerGalon;

  cout << "The car can be driven: " << result << "kilometers" << endl;

  return 0;
}