// Program to count total number of negative elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, negativeCount = 0;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            negativeCount++;
    }

    cout << "Total -ve element in Array is " << negativeCount << endl;

    return 0;
}