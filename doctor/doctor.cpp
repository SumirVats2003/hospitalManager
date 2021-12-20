#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Doctor
{

private:
    string name;
    int age;
    string sNo;
    string degree;
    int exp; // experience in years
    string special;

public:
    Doctor(string name, int age, string sNo, string degree, int exp, string special)
    {
        this->name = name;
        this->age = age;
        this->sNo = sNo;
        this->degree = degree;
        this->exp = exp;
        this->special = special;
    }

    void display()
    {
        cout << "The stats for doctor are: \n";
        cout << "Name: " << this->name << "\n";
        cout << "Age: " << this->age << "\n";
        cout << "Serial Number: " << this->sNo << "\n";
        cout << "Degree: " << this->degree << "\n";
        cout << "Experience: " << this->exp << "\n";
        cout << "Specialization: " << this->special << "\n";
    }

    // write stats in a File
    void writeFile()
    {
        string file = "doctor/" + (this->sNo) + ".dat";
        ofstream out;
        out.open(file);
        out << "Name: " << this->name << "\nAge: " << this->age << "\nSerial Number: " << this->sNo << "\nDegree: " << this->degree << "\nExperience: " << this->exp << "\nSpecialization: " << this->special;
    }

    void getDetails()
    {
        string file = "doctor/" + (this->sNo) + ".dat";
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
