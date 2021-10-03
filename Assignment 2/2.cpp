// Program to print all negative elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    cout << "This All -ve Elements in Array: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
