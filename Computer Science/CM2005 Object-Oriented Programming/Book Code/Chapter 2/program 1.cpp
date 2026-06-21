/*
CONVERT LENGHT

Write a program that takes as input given lenghts expressed in feet and inches.
The program should then convert and output the lengths in centimeters.
*/

#include <iostream>

int main()
{
  // Variable to hold the given feet
  int feet;
  // Variable to hold the given inchess
  int inches;
  // Variable to hold total inches
  int totalInches;
  // Variable to hold length in centimeters
  int centimeters;

  const double CENTIMETERS_PER_INCH = 2.54;
  const int INCHES_PER_FOOT = 12;

  // 1. Prompt the user for the input
  std::cout << "Plese enter a number for the feet" << "Press the return key" << std::endl;

  std::cout << "Plese enter a number for the inches" << "Press the return key" << std::endl;

  // 2. Get the data
  std::cin >> feet;
  std::cin >> inches;

  // 3. Echo the input - that is, output what the program read as input
  std::cout << "The feet are: " << feet << std::endl;
  std::cout << "The inches are: " << inches << std::endl;

  // 4. Find the lenght in inches
  totalInches = (12 * feet) + inches;

  // 5. Ouput the length in inches
  std::cout << "The tolal inches are: " << totalInches << std::endl;

  // 6. Convert the length to centimeters

  // 7. Output the length in centimeters

  return 0;
}