// Program to find sum of all array elements. - using recursion.

#include <iostream>
using namespace std;

int sumArray(int arr[], int index, int len)
{
    if (index >= len)
        return 0;

    return (arr[index] + sumArray(arr, index + 1, len));
}

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

    cout << "Sum of All elements Using recursion: " << sumArray(arr, 0, size) << endl;

    return 0;
}