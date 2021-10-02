// Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

#include <iostream>
using namespace std;

int main()
{
    int classHeld, classAttend;
    float perAttendance;
    char isMedical;

    cout << "Enter Number of Classes Held: ";
    cin >> classHeld;

    cout << "Enter Number of Classes Attended: ";
    cin >> classAttend;

    perAttendance = (classAttend * 100) / classHeld;

    if (perAttendance > 75)
    {
        cout << "Are you from Medical? Press 'Y' if YES or 'N' if NO: ";
        cin >> isMedical;
        if (isMedical == 'Y' || isMedical == 'y')
        {
            cout << "Yes you are from Medical & Your Attendance is " << perAttendance << "% You can sit in Exam" << endl;
        }
    }
    else
    {
        cout << "Sorry you are Not from Medical & Your Attendance is " << perAttendance << "% which is less than 75% You Can't Sit in Exam!" << endl;
    }

    return 0;
}