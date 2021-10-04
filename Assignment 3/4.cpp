// program to concatenate one string contents to another
#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter First String: ";
    cin.getline(str1, 50);

    cout << "Enter Second String: ";
    cin.getline(str2, 50);

    int len;
    for (len = 0; str1[len] != '\0'; len++)
        ;

    //Adding Second String into first String

    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[len++] = str2[i];
    }

    str1[len] = '\0';

    cout << "\nThe first string after adding second string content:\n"
         << str1;

    return 0;
}