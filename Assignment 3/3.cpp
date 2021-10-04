//  program to count number of words in string

#include <iostream>
using namespace std;

int main()
{
    int word = 0;
    char str[100];

    cout << "Enter String: ";
    cin.getline(str, 50);

    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        { //* Checking for Space
            word++;
        }
    }
    cout << "Total number to Word's: " << word + 1 << endl;

    return 0;
}