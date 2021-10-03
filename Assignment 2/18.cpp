// Program to search an element in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, item, found = 0;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    cout << "Which element want to Search: ";
    cin >> item;

    for (int i = 0; i < size; i++)
    {
        // If element is found in array then raise found flag & terminate from loop.
        if (arr[i] == item)
        {
            found = i + 1;
            break;
        }
    }

    if (found > 0)
    {
        cout << item << " Found at Position: " << found << endl;
    }
    else
    {
        cout << item << " Not Found in Array" << endl;
    }

    return 0;
}