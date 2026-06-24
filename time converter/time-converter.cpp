#include <iostream>
using namespace std;

class TimeConverter
{
public:
    void secondtotime()
    {
        int hour, minute, second;

        cout << "Enter Total Seconds: ";
        cin >> second;

        hour = second / 3600;
        minute = (second % 3600) / 60;
        second = (second % 3600) % 60;

        cout << "HH:MM:SS > "
             << hour << ":" << minute << ":" << second << endl;
    }

    void timetosecond()
    {
        int hour, minute, second, totalSeconds;

        cout << "Enter Hours: ";
        cin >> hour;

        cout << "Enter Minutes: ";
        cin >> minute;

        cout << "Enter Seconds: ";
        cin >> second;

        totalSeconds = (hour * 3600) + (minute * 60) + second;

        cout << "Total Seconds: " << totalSeconds << endl;
    }
};

int main()
{
    TimeConverter t;
    int choice;

    cout << "\n===== Time Converter =====" << endl;
    cout << "1. Seconds to HH:MM:SS" << endl;
    cout << "2. HH:MM:SS to Seconds" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        t.secondtotime();
        break;

    case 2:
        t.timetosecond();
        break;

    default:
        cout << "Invalid Choice!";
    }

    return 0;
}