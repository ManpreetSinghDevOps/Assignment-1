// Program to copy all elements from an array to another array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], arr2[100], size;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    //Copying element in Another Array
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }

    //Dispaying
    cout<<"Copied elements in Another Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i]<<" ";
    }

    return 0;
}