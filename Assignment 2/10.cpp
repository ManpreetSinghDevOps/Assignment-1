// Program to delete an element from an array at specified position.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, num, position;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    cout << "Enter element Position to Delete in Array: ";
    cin >> position;

    if (position < 0 || position > size)
    {
        cout << "Invalid Position! Please enter position b/w 0 to " << size << endl;
    }
    else
    {
        // Copy next element value to current element
        for (int i = position - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        // Decrement array size by 1
        size--;

        //Printing elements After Deletion
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}