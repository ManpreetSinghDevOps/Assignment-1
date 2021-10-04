// Pogram to find the length of string
#include <iostream>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter String: ";
    cin.getline(str, 50);

    int len; //Hold Length of String
    for (len = 0; str[len] != '\0'; len++);

    cout << "Length of String is: " << len << endl;

    return 0;
}