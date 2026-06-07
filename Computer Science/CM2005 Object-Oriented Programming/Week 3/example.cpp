#include <iostream>

int main()
{

  char c = 0;
  std::cout << "Char is: " << sizeof(c) << std::endl;

  signed int i = 0;
  std::cout << "signed int is: " << sizeof(i) << std::endl;

  float f = 0.0f;
  std::cout << "float is: " << sizeof(f) << std::endl;

  long double d = 0.0;
  std::cout << "long double is: " << sizeof(d) << std::endl;
}
