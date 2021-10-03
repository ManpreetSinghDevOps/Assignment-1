// Program to find reverse of an array.

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

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}