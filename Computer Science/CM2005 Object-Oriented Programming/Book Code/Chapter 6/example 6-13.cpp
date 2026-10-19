/*
This program reads a course score and prints the
associated course grade

1. main
A: Get the course score
B: Print the course grade

2. getScore
A: Prompt the user for the input
B: Get the input
C: Print the course score

3. printGrade
A: Calculate the course grade
B: Print the course grade
*/

#include <iostream>

using namespace std;

void getScore(int &score);
void printGrade(int score);

int main()
{
 int courseScore;

 cout << "Line 8: Based on the course score,"
      << " this program computes the "
      << "course grade." << endl;

 getScore(courseScore);
 printGrade(courseScore);

 return 0;
}

void getScore(int &score)
{
 cout << "Line 15: Enter course score: ";
 cin >> score;
 cout << "Line 17: The course score is " << score << endl;
}

void printGrade(int cScore)
{
 cout << "Line 21: The course grade is: ";

 if (cScore >= 90)
 {
  cout << "A" << endl;
 }
 else if (cScore >= 80)
 {
  cout << "B" << endl;
 }
 else if (cScore >= 70)
 {
  cout << "C" << endl;
 }
 else if (cScore >= 60)
 {
  cout << "D" << endl;
 }
 else
 {
  cout << "F" << endl;
 }
}
