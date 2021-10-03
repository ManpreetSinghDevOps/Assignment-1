//  Program to delete all duplicate elements from an array.
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
            {
                // for (int i = position - 1; i < size - 1; i++) ||ly to that Deleting at Given Position
                for (int k = 0; k < size - 1; k++)
                { //* in this we just Traverse whole Array & Deleting Repeating elements  
                    arr[k] = arr[k + 1];
                }

                //  Decrement size after removing duplicate element
                size--;

                //! If shifting of elements occur then don't increment j
                j--;
            }
        }
    }

    cout << "Arrays elements after deleting Duplicates: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}