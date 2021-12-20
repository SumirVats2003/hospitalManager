#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Patient
{

private:
    string name;
    string disease;
    string patNo;
    int age;
    string bedNo;
    int admitTime; // admit time in days

public:
    Patient(string name, string disease, string patNo, int age, string bedNo, int admitTime)
    {
        this->name = name;
        this->disease = disease;
        this->patNo = patNo;
        this->age = age;
        this->bedNo = bedNo;
        this->admitTime = admitTime;
    }

    void displayPatient()
    {
        cout << "The stats for patient are: \n";
        cout << "Name: " << this->name << "\n";
        cout << "Disease: " << this->disease << "\n";
        cout << "Patient No: " << this->patNo << "\n";
        cout << "Age: " << this->age << "\n";
        cout << "Bed Number: " << this->bedNo << "\n";
        cout << "Admit Time(in days): " << this->admitTime << "\n";
    }

    void writeFilePatient()
    {
        string file = "patient/" + (this->bedNo) + ".dat";
        ofstream out;
        out.open(file);
        out << "Name: " << this->name << "\nDisease: " << this->disease << "\nPateint No: " << this->patNo << "\nAge: " << this->age << "\nBed Number: " << this->bedNo << "\nAdmit Time: " << this->admitTime << "\n";
    }

    void getDetailsPatient()
    {
        string file = "patient/" + (this->bedNo) + ".dat";
        ifstream in;
        in.open(file);
        string st;
        while (in.eof() == 0)
        {
            getline(in, st);
            cout << st << "\n";
        }
    }
};
