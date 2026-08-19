#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void getData()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.numerator = (numerator * f.denominator) +
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        return result;
    }

    void display()
    {
        cout << numerator << "/" << denominator;
    }
};

int main()
{
    Fraction f1, f2, sum;

    cout << "Enter first fraction:\n";
    f1.getData();

    cout << "\nEnter second fraction:\n";
    f2.getData();

    sum = f1.add(f2);

    cout << "\nSum of fractions = ";
    sum.display();

    return 0;
}