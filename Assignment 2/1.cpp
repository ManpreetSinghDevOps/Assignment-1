// Program to read and print elements of array using Recursion
#include <iostream>
using namespace std;

void printArray(int arr[], int index, int len)
{
    if (index >= len)
        return;

    cout << arr[index] << " ";

    printArray(arr, index + 1, len);
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

    cout<<"This shows elements Using recursion: "<<endl;
    printArray(arr, 0, size);

    return 0;
}
