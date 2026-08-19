#include<iostream>
using namespace std;

class Complex
{
    int real,imag;

public:
    void inputdetails()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter Imaginary part:";
        cin>>imag;
    }
    void add(Complex c1,Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void subtract(Complex c1,Complex c2)
    {
        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;

    }

};
int main()
{
    Complex c1,c2,sum,difference;
    cout<<"Enter First Complex Number:"<<endl;
    c1.inputdetails();
    cout<<"Enter Second Complex Number:"<<endl;
    c2.inputdetails();
    sum.add(c1,c2);
    difference.subtract(c1,c2);

    cout<<"ADDITION=";
    sum.display();

    cout<<"DIFFERENCE=";
    difference.display();

    return 0;
}
    