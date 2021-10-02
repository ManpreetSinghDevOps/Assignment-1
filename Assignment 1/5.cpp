// A school has following rules for grading system:
// a. Below 25 - F
// b. 25 to 45 - E
// c. 45 to 50 - D
// d. 50 to 60 - C
// e. 60 to 80 - B
// f. Above 80 - A
// Ask user to enter marks and print the corresponding grade.

#include <iostream>
using namespace std;

int main()
{
    int num;
label:
    cout << "Enter your Number: ";
    cin >> num;

    if (num < 0 || num > 100)
    {
        cout << "Please Enter Valid Number !" << endl;
        goto label;
    }

    else if (num == 0 || num < 25)
    {
        cout << "You get F Grade" << endl;
    }
    else if (num >= 25 || num < 45)
    {
        cout << "You get E Grade" << endl;
    }
    else if (num >= 25 || num < 45)
    {
        cout << "You get D Grade" << endl;
    }
    else if (num >= 45 || num < 50)
    {
        cout << "You get C Grade" << endl;
    }
    else if (num >= 50 || num < 80)
    {
        cout << "You get B Grade" << endl;
    }
    else if (num >= 80)
    {
        cout << "You get A Grade" << endl;
    }

    return 0;
}