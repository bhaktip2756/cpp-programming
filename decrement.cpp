#include<iostream>
using namespace std;
class Number 
{
private:
int n;
public:
   Number(int x)
{
    n=x;
}
void operator--()
{
    --n;
}
void display()
{
    cout<<"="<<n<<endl;
}
};
int main()
{
    Number obj(10);

    cout<<"Before decrement:";
    obj.display();

    --obj;

    cout<<"After decrement";
    obj.display();
    
    return 0;
}
