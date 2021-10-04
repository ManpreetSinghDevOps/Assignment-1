// program to convert a string in lowercase & Uppercase.
#include <iostream>
using namespace std;

int main()
{

    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 50);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + 32) : str[i];
    }
    cout << "\nLowercase string: " << str << endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
    }
    cout << "\nConverted string: " << str;

    return 0;
}