// Take two int values from user and print greatest among them.
#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter Two number: ";
    cin >> x >> y;

    if (x > y)
    {
        cout << x << " Number is Greater than " << y << endl;
    }
    else{

        cout << y << " Number is Greater than " << x << endl;
    }

    return 0;
}