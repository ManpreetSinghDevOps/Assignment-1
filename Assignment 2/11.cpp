//Program to count frequency of each element in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], freq[100], size, num, count;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];

        freq[i] = -1; //* Initialized to NO Repeating
    }

    for (int i = 0; i < size; i++)
    {
        count = 1; //* EveryTime Updated for new different element Counter

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            { // if duplicate element is Found
                count++;

                //! Make sure not to count frequency of same element again
                freq[j] = 0;
            }
        }

        //! If frequency of current element is not counted
        if (freq[i] != 0)
            freq[i] = count;
    }

    cout << "Freqency of All elements of Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            cout << arr[i] << " Occurs " << freq[i] << " Times" << endl;
        }
    }

    return 0;
}