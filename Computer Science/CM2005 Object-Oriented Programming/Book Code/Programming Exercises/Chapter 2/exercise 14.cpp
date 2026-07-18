#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  // 1. Declare variables to store out numbers
  float advertiseGB;
  float totalBytes;
  float actualGB;

  // 2. Prompt the user for the hard drive size
  cout << "Enter the size of the hard drive specified by the manufacturer (in GB): " << endl;
  cin >> advertiseGB;

  // 3. Convert the manufacturers GB into total bytes (Base-10)
  // 1GB = 1000 * 1000 * 1000;
  totalBytes = advertiseGB * (1000 * 1000 * 1000);

  // 4. Convert those total bytes into true computer BG (base-2)
  // 1BG = 1024 * 1024 * 1024;
  actualGB = totalBytes / (1024 * 1024 * 1024);

  // 5. Output the final calculation result
  cout << fixed << setprecision(2);
  cout << "The actual storage capacity is: " << actualGB << " GB" << endl;

  return 0;
}