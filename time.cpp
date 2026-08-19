#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to accept time
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to add two times
    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        // Convert seconds into minutes
        if (result.seconds >= 60)
        {
            result.minutes += result.seconds / 60;
            result.seconds = result.seconds % 60;
        }

        // Convert minutes into hours
        if (result.minutes >= 60)
        {
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }

        return result;
    }

    // Function to display time
    void display()
    {
        cout << setfill('0')
             << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter First Time:\n";
    t1.accept();

    cout << "\nEnter Second Time:\n";
    t2.accept();

    result = t1.add(t2);

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Resultant Time: ";
    result.display();

    return 0;
}