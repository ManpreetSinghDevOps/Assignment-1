// Program to put even and odd elements of array in two separate array.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], evenArr[100], oddArr[100], size, evenCount, oddCount;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    //Separating into another Array's
    evenCount = oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        { //* inside evenArr only fill Value element is Even
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else
        { //* inside evenArr only fill Value element is Odd
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    cout << "\nEven Number: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenArr[i] << " ";
    }
    // cout << "\nEven Number in Array: ";
    // for (int i = 0; i < size; i++)
    // { //* Directly Printed Even number in Array without transfer element in Another Array
    //     if (arr[i] % 2 == 0)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    cout << "\nOdd Number: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddArr[i] << " ";
    }
    // cout << "\nOdd Number in Array: ";
    // for (int i = 0; i < size; i++)
    // { //* Directly Printed Even number in Array without transfer element in Another Array
    //     if (arr[i] % 2 != 0)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    return 0;
}