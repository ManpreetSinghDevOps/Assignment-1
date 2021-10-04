// program to compare two strings they are exact equal or not
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
    for (len = 0; str1[len] == str2[len] && str1[len] != '\0' && str2[len] != '\0'; len++)
        ;

    if (str1[len] - str2[len] == 0)
        cout << "String are Equal" << endl;
    else
        cout << "String are Not Equal" << endl;
    return 0;
}