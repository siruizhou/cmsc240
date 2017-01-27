#include <iostream>
#include <string>

using namespace std;

void changeValue(int& someInt, string& someString);

int main(int argc, char* argv[])
{
    int   ur_id = 11112222;
    string name  = "Theo Barnett";

    cout << "Before: " << ur_id << " : " << name << endl;

    changeValue(ur_id, name);

    cout << "After:  " << ur_id << " : " << name << endl;

    return 0;
}

void changeValue(int& someInt, string& someString)
{
    someInt    = 22223333;
    someString = "Finnegan Lane";
}
