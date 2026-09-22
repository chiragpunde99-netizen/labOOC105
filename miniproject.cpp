#include <iostream>
#include <string>
using namespace std;

// Base Class
class Passenger
{
protected:
    int passengerId;
    string name;
    int age;

public:
    // Constructor
    Passenger(int id, string n, int a)
    {
        passengerId = id;
        name = n;
        age = a;
    }

    void displayPassenger()
    {
        cout << "\nPassenger ID : " << passengerId;
        cout << "\nName         : " << name;
        cout << "\nAge          : " << age << endl;
    }
};

// Derived Class
class Reservation : public Passenger
{
private:
    int trainNo;
    string trainName;
    string source;
    string destination;
    int seatNo;

public:
    // Constructor
    Reservation(int id, string n, int a, int tno,
                string tn, string s, string d, int seat)
        : Passenger(id, n, a)
    {
        trainNo = tno;
        trainName = tn;
        source = s;
        destination = d;
        seatNo = seat;
    }

    void displayReservation()
    {
        cout << "\n===== RAILWAY RESERVATION =====";
        displayPassenger();

        cout << "Train Number : " << trainNo << endl;
        cout << "Train Name   : " << trainName << endl;
        cout << "Source       : " << source << endl;
        cout << "Destination  : " << destination << endl;
        cout << "Seat Number  : " << seatNo << endl;
    }
};

// Train Class
class Train
{
private:
    int trainNo;
    string trainName;
    int totalSeats;

public:
    // Constructor
    Train(int no, string name, int seats)
    {
        trainNo = no;
        trainName = name;
        totalSeats = seats;
    }

    void displayTrain()
    {
        cout << "\n===== TRAIN DETAILS =====";
        cout << "\nTrain Number : " << trainNo;
        cout << "\nTrain Name   : " << trainName;
        cout << "\nTotal Seats  : " << totalSeats << endl;
    }
};

int main()
{
    // Objects
    Train t1(101, "Deccan Express", 100);

    Reservation r1(
        1,
        "Rahul",
        20,
        101,
        "Deccan Express",
        "Pune",
        "Mumbai",
        25
    );

    // Display details
    t1.displayTrain();
    r1.displayReservation();

    return 0;
}