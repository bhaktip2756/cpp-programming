#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
string name,department;
int employeeID;
float salary;

public:
void inputdetails(){
cout<<"Enter Employee Name";
cin>>name;
cout<<"Enter Department";
cin>>department;
cout<<"Enter Employee id";
cin>>employeeID;
cout<<"Enter Employee salary";
cin>>salary;
}

void displaydetails()
const{
cout<<"\n EMPLOYEE DETAILS \n";
cout<<"NAME:"<<name<<endl;
cout<<"DEPARTMENT:"<<department<<endl;
cout<<"EMPLOYEE ID:"<<employeeID<<endl;
cout<<"SALARY:"<<salary<<endl;
}
};

int main()
{
Employee s;
s.inputdetails();
s.displaydetails();
return 0;
}



