#include <iostream>
#include <string>
#include <fstream>
#include "doctor/doctor.cpp"
#include "patient/patient.cpp"
#include "helper/helper.cpp"
using namespace std;


void retreive() {
    loop:
    string type;
    string data;
    cout << "Enter type of person(Doctor/Patient/Helper): ";
    cin >> type;
    if (type == "Doctor" || type == "doctor") {
        cout << "Enter Serial No. of Doctor to get data: ";
        cin >> data;
        string file = "doctor/" + (data) + ".dat";
        ifstream in;
        in.open(file);
        string st;
        while (in.eof() == 0) {
            getline(in, st);
            cout << st << "\n";
        }
    }
    else if (type == "Patient" || type == "petient") {
        cout << "Enter Patient No. of Patient to get data: ";
        cin >> data;
        string file = "patient/" + (data) + ".dat";
        ifstream in;
        in.open(file);
        string st;
        while (in.eof() == 0) {
            getline(in, st);
            cout << st << "\n";
        }
    }
    else if (type == "Helper" || type == "helper") {
        cout << "Enter Serial No. of Helper to get data: ";
        cin >> data;
        string file = "helper/" + (data) + ".dat";
        ifstream in;
        in.open(file);
        string st;
        while (in.eof() == 0) {
            getline(in, st);
            cout << st << "\n";
        }
    }
    else {
        cout << "No such record found, enter correct credentials\n";
        goto loop;
    }
}
