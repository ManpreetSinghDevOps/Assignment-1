//  Program to find maximum and minimum element in an array. - using recursion.

#include <iostream>
using namespace std;

int maximum(int arr[], int len)
{
    //* if size = 0 means whole array has been traversed
    if (len == 1)
        return arr[0];

    return max(arr[len - 1], maximum(arr, len - 1));
}

// int maximum(int arr[], int index, int len)
// {
//     int max;

//     // Only last and second last element are left
//     if (index >= len - 2)
//     {
//         if (arr[index] > arr[index + 1])
//             return arr[index];
//         else
//             return arr[index + 1];
//     }

//     //  Recursively call maximum to find maximum element in Right side of the array from current index
//     max = maximum(arr, index + 1, len);

//     //  Compare the current array element with maximum element on its right side
//     if (arr[index] > max)
//         return arr[index];
//     else
//         return max;
// }

int minimum(int arr[], int len)
{
    //* if size = 0 means whole array has been traversed
    if (len == 1)
        return arr[0];

    return min(arr[len - 1], minimum(arr, len - 1));
}

// int minimum(int array[], int index, int len)
// {
//     int min;

//     if (index >= len - 2)
//     {
//         return (array[index] < array[index + 1])
//                    ? array[index]
//                    : array[index + 1];
//     }

//     min = minimum(array, index + 1, len);

//     return (array[index] < min)
//                ? array[index]
//                : min;
// }

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

    cout << "Minimum element is " << minimum(arr, size) << " & Maximun element is " << maximum(arr, size) << endl;
    return 0;
}