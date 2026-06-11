#include <iostream>

int main()
{

  unsigned short i = 65534;
  signed long l = 234234;

  std::cout << "The size of the unsigned is: " << sizeof(i) << std::endl;
  std::cout << "i contains " << i << std::endl;

  std::cout << "The size of the signed is: " << sizeof(l) << std::endl;
  std::cout << "l contains " << l << std::endl;

  return 0;
}
