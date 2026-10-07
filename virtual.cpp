#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Square : public Shape
{
public:
    int side;

    Square(int s)
    {
        side = s;
    }

    void area() override
    {
        int a = side * side;
        cout << "Area of Square = " << a << endl;
    }
};

class Rectangle : public Shape
{
public:
    int length, breadth;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        int a = length * breadth;
        cout << "Area of Rectangle = " << a << endl;
    }
};

class Circle : public Shape
{
public:
    int radius;

    Circle(int r)
    {
        radius = r;
    }

    void area() override
    {
        float a = 3.14 * radius * radius;
        cout << "Area of Circle = " << a << endl;
    }
};

int main()
{
    Square s(10);
    Rectangle r(5, 10);
    Circle c(2);

    s.area();
    r.area();
    c.area();

    return 0;
}
