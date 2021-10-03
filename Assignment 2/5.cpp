// Program to find second largest element in an array.
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[100], size;
    int max1, max2;
    max1 = max2 = INT_MIN;

    cout << "Enter Size of an Array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        { //* If Current Array element is first Largest then Make it Current Max. as Second Max. & then Current Array element Assign to first max.
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        { //  If current array element is less than first largest but is greater than second largest then make it second largest
            max2 = arr[i];
        }
    }

    cout << "First Largest element in Array: " << max1 << endl;
    cout << "Second Largest element in Array: " << max2 << endl;

    return 0;
}