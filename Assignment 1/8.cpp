// A student will not be allowed to sit in exam if his/her Attendance is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include <iostream>
using namespace std;

int main()
{
    int classHeld, classAttend;
    float perAttendance;

    cout << "Enter Number of Classes Held: ";
    cin >> classHeld;

    cout << "Enter Number of Classes Attended: ";
    cin >> classAttend;

    perAttendance = (classAttend * 100) / classHeld;

    if (perAttendance < 75)
    {
        cout << "Your Attendance is " << perAttendance << "% which is less than 75% You Can't Sit in Exam!" << endl;
    }
    else
    {
        cout << "Your Attendance is " << perAttendance << "% You can sit in Exam" << endl;
    }

    return 0;
}