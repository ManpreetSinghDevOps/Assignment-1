// Program to merge two array to third array.
#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], mergeArr[200];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;

    cout << "Enter Size of an Array: ";
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr1[i];
    }

    cout << "Enter Size of an Array: ";
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter element at " << i << " index: ";
        cin >> arr2[i];
    }

    mergeSize = size1 + size2;

    // Merging Two Array in Accending Order
    index1 = index2 = 0;
    for (mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
    {
        if (index1 >= size1 || index2 >= size2)
        { //! If All elements of one array is Merged Third Array
            break;
        }

        if (arr1[index1] < arr2[index2])
        { //* To fill All first Array elements to Merged Array
            mergeArr[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        { //* To fill All Second Array elements to Merged Array
            mergeArr[mergeIndex] = arr2[index1];
            index2++;
        }
    }

    // Merge remaining array elements
    while (index1 > size1)
    {
        mergeArr[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while (index2 < size2)
    {
        mergeArr[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

    // Print merged array
    cout << "Array merged in Accending order: ";
    for (int i = 0; i < mergeSize; i++)
    {
        cout << mergeArr[i] << " ";
    }

    return 0;
}