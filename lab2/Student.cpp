#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string a_name, int a_ur_id, string a_netid)
{
    name  = a_name;
    ur_id = a_ur_id;
    netid = a_netid;
}

Student::~Student()
{
}

void Student::print()
{
    cout << "Student: " << ur_id << " " << netid << " " << name << endl;
}

void Student::setName(string new_name)
{
    name = new_name;
}

void Student::setNetID(string new_netid)
{
    netid = new_netid;
}

void Student::setURID(int new_ur_id)
{
    ur_id = new_ur_id;
}
