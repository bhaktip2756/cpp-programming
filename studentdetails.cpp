#include<iostream>
#include<string>
using namespace std;

class Student{
private:
string name;
int rollno;
float marks;

private:
void inputdetails(){
cout<<"Enter Student Name";
cin>>name;
cout<<"Enter Roll Number";
cin>>rollno;
cout<<"Enter Marks";
cin>>marks;
}
void displaydetails()
const{
cout<<"\n__Student Details__\n";
cout<<"Name:"<<name<<endl;
cout<<"Roll no:"<<rollno<<endl;
cout<<"Marks:"<<marks<<endl;
}
public:
void process()
{
inputdetails();
displaydetails();
}
};
int main(){
Student s;
s.process();
//s.inputdetails();
//s.displaydetails();
//s.name="name";
return 0;
}

