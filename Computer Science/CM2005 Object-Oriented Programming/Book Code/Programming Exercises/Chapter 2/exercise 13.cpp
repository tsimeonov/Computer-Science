
#include <iostream>
using namespace std;

int main()
{

  /* 1. Declare variables to hold our data (using floating-point numbers for decimals)
  DECLARE originalPrice, markupPercentage, salesTaxRate AS FLOAT DECLARE markupAmount, sellingPrice, salesTax, finalPrice AS FLOAT */

  float originalPrice;
  float markupPercentage;
  float salesTaxRate;
  float markupAmount;
  float sellingPrice;
  float salesTax;
  float finalPrice;

  /* 2. Read inputs from the user
   PRINT "Enter the original price of the item:" READ originalPrice */
  cout << "Enter the original price of the item" << endl;
  cin >> originalPrice;

  // PRINT "Enter the markup percentage:" READ markupPercentage
  cout << "Enter the markup percentage" << endl;
  cin >> markupPercentage;

  // PRINT "Enter the sales tax rate percentage:" READ salesTaxRate
  cout << "Enter the sales tax rate percentage" << endl;
  cin >> salesTaxRate;

  /* 3. Perform the necessary calculations
  Calculate the actual dollar amount of the markup
  markupAmount = originalPrice * (markupPercentage / 100) */
  markupAmount = originalPrice * (markupPercentage / 100);

  // Add the markup amount to the original price to get the store's selling price
  // sellingPrice = originalPrice + markupAmount
  sellingPrice = originalPrice + markupAmount;

  // Calculate the dollar amount of the sales tax based on the new selling price
  // salesTax = sellingPrice * (salesTaxRate / 100)
  salesTax = sellingPrice * (salesTaxRate / 100);

  // Add the sales tax to the selling price to get the final price the customer pays
  // finalPrice = sellingPrice + salesTax
  finalPrice = sellingPrice + salesTax;

  /*  4. Output the results
  PRINT "--- Price Summary ---" PRINT "Original Price: $",
  originalPrice PRINT "Markup Percentage: ", markupPercentage, "%" PRINT "Selling Price: $", sellingPrice PRINT "Sales Tax Rate: ", salesTaxRate, "%" PRINT "Sales Tax: $", salesTax PRINT "Final Price: $", finalPrice END*/

  cout << "--- Price Summary ---" << endl;
  cout << "Original price: $" << originalPrice << endl;
  cout << "Markup Percentage: " << markupPercentage << endl;
  cout << "Selling price: $" << sellingPrice << endl;
  cout << "Sales tax rate: " << salesTaxRate << endl;
  cout << "Sales Tax: " << salesTax << endl;
  cout << "Final Price: $" << finalPrice << endl;

  return 0;
}
