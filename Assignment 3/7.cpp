//  program to find a substring within a string. If found display its starting position
#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 50);

    cout << "Enter second string: ";
    cin.getline(str2, 50);

    int len = 0; //Hold length of second string

    //finding length of second string
    for (len = 0; str2[len] != '\0'; len++)
        ;

    int i, j;

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++; //* track Position
        }
        else
        {
            j = 0; //! Not Found
        }
    }

    if (j == len)
        cout << "Substring found at position " << i - j + 1;
    else
        cout << "Substring not found";

    return 0;
}