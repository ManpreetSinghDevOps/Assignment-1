//  program to check a string is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter  String: ";
    cin.getline(str, 50);

    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;

    //Comparing first element with last element till middle of string
    int i;
    for (i = 0; (i < len / 2) && (str[i] == str[len - i - 1]); i++)
        ;

    if (i == len / 2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}