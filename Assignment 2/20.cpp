//  Program to sort even and odd elements of array separately.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], evenArr[100], oddArr[100], size;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nEven Number in Array: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << "\nOdd Number in Array: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}