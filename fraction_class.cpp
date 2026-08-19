#include <iostream>
#include <numeric>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    // Function to accept fraction
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        while (denominator == 0)
        {
            cout << "Denominator cannot be zero. Enter again: ";
            cin >> denominator;
        }
    }

    // Function to simplify fraction
    void simplify()
    {
        int g = gcd(abs(numerator), abs(denominator));

        numerator = numerator / g;
        denominator = denominator / g;

        // Keep denominator positive
        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    // Function to add two fractions
    Fraction add(Fraction f)
    {
        Fraction result;

        result.numerator = (numerator * f.denominator) +
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        result.simplify();

        return result;
    }

    // Function to subtract two fractions
    Fraction subtract(Fraction f)
    {
        Fraction result;

        result.numerator = (numerator * f.denominator) -
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        result.simplify();

        return result;
    }

    // Function to display fraction
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, difference;

    cout << "Enter First Fraction:\n";
    f1.accept();

    cout << "\nEnter Second Fraction:\n";
    f2.accept();

    sum = f1.add(f2);
    difference = f1.subtract(f2);

    cout << "\nFirst Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}