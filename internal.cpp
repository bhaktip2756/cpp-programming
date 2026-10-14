#include<iostream>
using namespace std;

class Patient
{
    int id;
    string name;
    int age;
    float charge;

public:
    void registerPatient()
    {
        cout<<"Enter Patient ID:";
        cin>>id;

        cout<<"Enter Patient name:";
        cin>>name;

        cout<<"Enter Patient age:";
        cin>>age;
    }
}
 void calculateCharge() {
        charge = 500;
    }

    void displayInfo() {
        cout << "\n Inf of the patient" << endl;
        cout<<"Patient ID"<<id<<endl;
        cout<<"Patient Name"<<name<<endl;
        cout<<"Patient Age"<<age<<endl;
        cout<<"Consultation FEE"<<charge<<end;
    }
};

int main()
{
    patient p;
    p.registerpatient();
    p.calculateCharge();
    p.displayInfo();

    return 0;
}

        