//  program to reverse a string

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter String: ";
    cin.getline(str, 50);

    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;

    int temp;
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reverse string: " << str << endl;

    return 0;
}