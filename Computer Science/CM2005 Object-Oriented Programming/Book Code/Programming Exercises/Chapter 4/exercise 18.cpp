#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 // Variables
 double bodyWeightWomen;
 double wristWomen;
 double waistWomen;
 double hipWomen;
 double forarmWomen;

 double bodyWeightMen;
 double wristMen;

 string gender;

 // Input
 cout << "Please type your gender male or female: ";
 cin >> gender;
 cout << endl;

 cout << fixed << setprecision(2);

 if (gender == "female")
 {
  cout << "Type your bodyweight, wrist, waist, hip, forarm measurent: ";
  cin >> bodyWeightWomen >> wristWomen >> waistWomen >> hipWomen >> forarmWomen;
  cout << endl;

  double a1Women = (bodyWeightWomen * 0.732) + 8.987;
  double a2Women = wristWomen / 3.140;
  double a3Women = waistWomen * 0.157;
  double a4Women = hipWomen * 0.249;
  double a5Women = forarmWomen * 0.434;
  double bWomen = a1Women + a2Women + a3Women + a4Women + a5Women;
  double fatWomen = bodyWeightWomen - bWomen;
  double fatPerWomen = fatWomen * 100 / bodyWeightWomen;

  cout << "Your body fat is: " << fatWomen << endl;
  cout << "Your body fat percentage is: " << fatPerWomen << "%" << endl;
 }

 else if (gender == "male")
 {
  cout << "Type your bodyweigh and wrist measurent: ";
  cin >> bodyWeightMen >> wristMen;
  cout << endl;

  double a1Men = (bodyWeightMen * 1.082) + 94.42;
  double a2Men = wristMen * 4.15;
  double bMen = a1Men - a2Men;
  double fatMen = bodyWeightMen - bMen;
  double fatPerMen = fatMen * 100 / bodyWeightMen;

  cout << "Your body fat is: " << fatMen << endl;
  cout << "Your body fat percentage is: " << fatPerMen << "%" << endl;
 }

 else
 {
  cout << "Incorrect input, please enter gender again" << endl;
 }

 // Output
 return 0;
}