#include <iostream>

using namespace std;

int main()
{

  // declare variables
  double fixed_commission, commission_percentage, car_cost;
  double min_added_amount, max_added_amount;
  double min_selling_price, max_selling_price;
  double min_commission, max_commission;

  // Prompt the user for inputs
  cout << "Enter the salespersons fixed commission (e.g., 20): " << endl;
  cin >> fixed_commission;

  cout << "Enter the commission percentage (e.g, 30)" << endl;
  cin >> commission_percentage;

  cout << "Enter the purchase const of the car:" << endl;
  cin >> car_cost;

  cout << "Enter the minimum prices addded for the selling price (e.g., 200)" << endl;
  cin >> min_added_amount;

  cout << "Enter the maximum prices addded for the selling price (e.g., 2000)" << endl;
  cin >> max_added_amount;

  // Process the calculation
  /// Calculate selling prices
  min_selling_price = car_cost + min_added_amount;
  max_selling_price = car_cost + max_added_amount;

  /// Calculate the commisios
  /// Note: We divide the percentage by 100 to turn it into a decimal (e.g,. 30 / 100)

  min_commission = fixed_commission + (commission_percentage / 100) * min_added_amount;
  max_commission = fixed_commission + (commission_percentage / 100) * max_added_amount;

  // Output the results

  cout << "Minimum selling price of the car: $ " << min_selling_price << endl;
  cout << "Maximum selling price of the car: $ " << max_selling_price << endl;
  cout << "Saleasperson's commission range: $" << min_commission << " to $" << max_commission << endl;

  return 0;
}