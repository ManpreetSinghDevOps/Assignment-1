// Program to count total number of even and odd elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, evencount = 0, oddcount = 0;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }

    cout << "Total Even Number is " << evencount << " & Total Odd Number is " << oddcount << endl;

    return 0;
}