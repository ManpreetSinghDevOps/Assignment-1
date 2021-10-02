// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter Quantity: ";
    cin >> x;

    if ((x * 100) > 1000)
    {
        cout << "You get a discount of " << (.1 * x * 100) << " & your Total cost is " << (x * 100 - (.1 * x * 100));
    }
    else
    {
        cout << "No discount";
    }

    return 0;
}