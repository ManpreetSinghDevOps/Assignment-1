// Program to Left & Right Rotate an Array.
#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int len)
{
    // Store first element of array
    int first = arr[0];

    for (int i = 0; i < len - 1; i++)
    { // Move each array element to its left
        arr[i] = arr[i + 1];
    }

    // Copies the first element of array to last
    arr[len - 1] = first;
}

void rightRotateByOne(int arr[], int len)
{
    // Store last element of array
    int last = arr[len - 1];

    for (int i = len - 1; i > 0; i--)
    { // Move each array element to its right
        arr[i] = arr[i - 1];
    }

    // Copy last element of array to first
    arr[0] = last;
}

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], size, numRotate;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    cout << "Enter Number of times to Left Rotate: ";
    cin >> numRotate;

    // Actual Rotation
    numRotate = numRotate % size;

    cout << "\nArray before Rotation: ";
    printArr(arr, size);

    //Left Rotate Array n terms------------------------->
    for (int i = 0; i < numRotate; i++)
    {
        leftRotateByOne(arr, size);
    }
    cout << "\n\nArray after Left Rotation: ";
    printArr(arr, size);

    //Right Rotate Array n terms-------------------------->
    for (int i = 1; i <= numRotate; i++)
    {
        rightRotateByOne(arr, size);
    }
    cout << "\nArray after Right Rotation: ";
    printArr(arr, size);

    return 0;
}