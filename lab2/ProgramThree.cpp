#include <iostream>
#include <string>

using namespace std;

struct student
{
    int    ur_id;
    string name;
    string netid;
};

void print(student some_student);
void changeID(student* some_student); // use pointer parameter
void changeID(student& some_student); // use reference parameter

int main(int argc, char* argv[])
{
    student one = {11112222,"Theo Barnett","tb1ab"};
    student two = {22223333,"Finnegan Lane","fl2bc"};

    cout << "Before: " << endl;
    print(one);
    print(two);

    //use pointer parameter for changeID method
    changeID(&one);
    changeID(&two);

    cout << "After (using pointer parameter for changeID method): " << endl;
    print(one);
    print(two);

    //use reference parameter for changeID method
    changeID(&one);
    changeID(&two);

    cout << "After (using reference parameter for changeID method): " << endl;
    print(one);
    print(two);

    return 0;
}

void print(student some_student)
{
    cout << "Student: " << some_student.ur_id << " " << some_student.netid 
         << " " << some_student.name << endl;
}

//use pointer 
void changeID(student* some_student)
{
    int new_id;
    cout << "Enter new UR id for " << some_student->name << ": ";
    cin >> new_id;

    some_student->ur_id = new_id;
}

//use reference varaible
void changeID(student& some_student)
{
    int new_id;
    cout << "Enter new UR id for " << some_student.name << ": ";
    cin >> new_id;

    some_student.ur_id = new_id;
}
