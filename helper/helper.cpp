#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Helper
{

private:
    string name;
    string type; // nurse, compounder, sweeper, etc.
    int age;
    string sNo;
    int workHrs; // working hours count

public:
    Helper(string name, string type, int age, string sNo, int workHrs)
    {
        this->name = name;
        this->type = type;
        this->age = age;
        this->sNo = sNo;
        this->workHrs = workHrs;
    }
    void displayHelper()
    {
        cout << "The stats for Helper are: \n";
        cout << "Name: " << this->name << "\n";
        cout << "Type: " << this->type << "\n";
        cout << "Age: " << this->age << "\n";
        cout << "Bed Number: " << this->sNo << "\n";
        cout << "Work Hours: " << this->workHrs << "\n";
    }
    void writeFileHelper()
    {
        string file = "helper/" + (this->sNo) + ".dat";
        ofstream out;
        out.open(file);
        out << "Name: " << this->name << "\nType: " << this->type << "\nAge: " << this->age << "\nBed Number: " << this->sNo << "\nWork Hours: " << this->workHrs << "\n";
    }

    void getDetailsHelper()
    {
        string file = "helper/" + (this->sNo) + ".dat";
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

