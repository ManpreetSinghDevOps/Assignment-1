// program to display string from backward

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter String: ";
    cin.getline(str, 50);

    int len; //Hold Length of String
    for (len = 0; str[len] != '\0'; len++);

    //Display String From Backward
    for (int i = len - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}