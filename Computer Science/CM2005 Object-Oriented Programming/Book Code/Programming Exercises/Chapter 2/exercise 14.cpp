#include <iostream>

using namespace std;

int main()
{

  // variables
  float byte;
  float kiloByte = 1 << 10;
  float megaByte = kiloByte * (1 << 10);
  float gigaByte = megaByte * (1 << 10);
  float teraByte = gigaByte * (1 << 10);
  float petaByte = teraByte * (1 << 10);
  float exaByte = petaByte * (1 << 10);
  float zettaByte = exaByte * (1 << 10);

  return 0;
}