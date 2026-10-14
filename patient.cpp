
#include <iostream>
using namespace std;

class Patient {
    int id;
    string name;
    int age;
    float charge;

public:
    void registerPatient() {
        cout << "Enter Patient ID: ";
        cin >> id;

        cout << "Enter Patient Name: ";
        cin >> name;

        cout << "Enter Patient Age: ";
        cin >> age;
    }

    void calculateCharge() {
        charge = 500;
    }

    void displayInfo() {
        cout << "\n INF of the patient" << endl;
        cout << "Patient ID: " << id << endl;
        cout << "Patient Name: " << name << endl;
        cout << "Patient Age: " << age << endl;
        cout << "Consultation Charge: Rs. " << charge << endl;
    }
};

int main() {
    Patient p;

    p.registerPatient();
    p.calculateCharge();
    p.displayInfo();

    return 0;
}
