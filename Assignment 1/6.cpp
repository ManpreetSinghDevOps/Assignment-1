// Take input of age of 3 people by user and determine oldest and youngest among them.
#include <iostream>
using namespace std;

int main()
{
    int x, y, z, older, younger;
    cout << "Enter first person Age: ";
    cin >> x;
    cout << "Enter second person Age: ";
    cin >> y;
    cout << "Enter third person Age: ";
    cin >> z;
    

    if (x > y)
    {
        // if (x > z)
        // {
        //     // cout<<"First person is Older form All"<<endl;
        //     older = x;
        // }
        // else
        // {
        //     // cout<<"Second person is Older form All"<<endl;
        //     older = z;
        // }

        older = (x > z) ? x : z;
    }
    else
    {
        // if (y > z)
        // {
        //     older = y
        // }
        // else
        // {
        //     older = z;
        // }

        older = (y > z) ? y : z;
    }

    if (x < y)
    {
        younger = (x < z) ? x : z;
    }
    else
    {
        younger = (y < z) ? y : z;
    }

    cout << " Youngest Age is " << younger << " & Oldest Age is " << older << endl;
    return 0;
}