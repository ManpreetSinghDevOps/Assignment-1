// Program to insert an element in an array.
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

    cout << "Enter element to Insert in Array: ";
    cin >> num;
    cout << "Enter element Position: ";
    cin >> position;

    if (position <= 0 || position > size + 1)
    {
        cout << "Invalid Position! Please Enter Position b/w 0 to " << size;
    }
    else
    {
        // Make Room for new Array element by Shifting elements to Right Side
        for (int i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert new element at given position and increment size
        arr[position - 1] = num;
        size++;

        // Print array after insert operation
        printf("Array elements after insertion : ");
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}