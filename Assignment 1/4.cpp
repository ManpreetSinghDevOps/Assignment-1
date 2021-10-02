// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;

int main()
{
    int salary, service;
    cout << "Enter your Salary: ";
    cin >> salary;

    cout << "How many year U work in Company? ";
    cin >> service;

    if (service > 5)
    {
        cout << "Congratulations Company will Decide to give you Bonus: " << (salary * 8.33 / 100) << endl;
    }
    else
    {
        cout << "Stay Connect: Work hard" << endl;
    }

    return 0;
}