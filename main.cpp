#include "retreive.cpp"
using namespace std;

// driver code
int main() {
    cout << "==============Hospital Management Software==============";
    cout << "\n\n";
    cout << "Run help.html to know about how to use the software\n";
    cout << "This software is intended to be used for management of Hospital Data\n";
    cout << "Functions performed by this software: \n";
    cout << "1. Set Doctor Data\n";
    cout << "2. Set Patient Data\n";
    cout << "3. Set Helper Data\n";
    cout << "4. Retreive Doctor Data\n";
    cout << "5. Retreive Patient Data\n";
    cout << "6. Retreive Helper Data\n";
    cout << "7. Retreive past Data\n";
    cout << "\n";
    cout << "Enter function index to continue: ";
    int function;

    while(true) {
        if (function == 1 || function == 4) {
            // set doctor data
            string name;
            int age;
            string sNo;
            string degree;
            int exp; // experience in years
            string special;
            cout << "Enter the following data for doctor: \n";
            cout << "Name: ";
            cin >> name;
            cout << "Age: ";
            cin >> age;
            cout << "Serial No: ";
            cin >> sNo;
            cout << "Degree: ";
            cin >> degree;
            cout << "Experience: ";
            cin >> exp;
            cout << "Specialization: ";
            cin >> special;
            Doctor d1(name, age, sNo, degree, exp, special);
            if (function == 1) {
                d1.writeFile();
            }
            else {
                d1.getDetails();
            }

        }

        else if (function == 2 || function == 5) {
            // set patient data
            string name;
            string disease;
            string patNo;
            int age;
            string bedNo;
            int admitTime;
            cout << "Enter the following data for patient: \n";
            cout << "Name: ";
            cin >> name;
            cout << "Disease: ";
            cin >> disease;
            cout << "Patient No: ";
            cin >> patNo;
            cout << "Age: ";
            cin >> age;
            cout << "Bed No: ";
            cin >> bedNo;
            cout << "Admit time in days: ";
            cin >> admitTime;
            Patient p1(name, disease, patNo, age, bedNo, admitTime);
            if (function == 2) {
                p1.writeFilePatient();
            }
            else {
                p1.getDetailsPatient();
            }
        }

        else if (function == 3 || function == 6) {
            // set helper data
            string name;
            string type; // nurse, compounder, sweeper, etc.
            int age;
            string sNo;
            int workHrs; // working hours count
            cout << "Enter the following data for helper: \n";
            cout << "Name: ";
            cin >> name;
            cout << "Type of help: ";
            cin >> type;
            cout << "Age: ";
            cin >> age;
            cout << "Serial No: ";
            cin >> sNo;
            cout << "Work Hours count: ";
            cin >> workHrs;
            Helper h1(name, type, age, sNo, workHrs);
            if (function == 3) {
                h1.writeFileHelper();
            }
            else {
                h1.getDetailsHelper();
            }
        }

        else if (function == 7) {
            retreive();
        }

        else {
            cout << "Function at index " << function << " does not exist...\n";
        }

        cout << "To continue, type function index\n";
        cout << "To quit, type 0\n";
        cout << "Function: ";
        cin >> function;

        if (function==0) {
            break;
        }
    }

    cout << "Thanks for using the system\n";
    return 0;
}
