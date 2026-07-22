#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter a year";
cin>>year;
if(year%4)
cout<<"The year is leap";
else
cout<<"Not leap";
return 0;
}
