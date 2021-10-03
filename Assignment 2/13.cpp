// Program to count total number of duplicate elements in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, num, count = 0;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            { // if duplicate element is Found then Incremented by 1
                count++;
                break;
            }
        }
    }

    cout << "Total Number of duplicate elements found in array: " << count << endl;
    return 0;
}