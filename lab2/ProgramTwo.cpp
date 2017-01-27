#include <iostream>
#include <string>

using namespace std;

void changeValue(int* someInt);

int main(int argc, char* argv[])
{
    int    anInt  = 8675309;
    int*   intPtr = &anInt;   

    cout << "Before: " << endl;
    cout << "\t anInt  = " << anInt << endl;      
    cout << "\t intPtr = " << intPtr << endl;      

    changeValue(intPtr);           

    cout << "After: " << endl;
    cout << "\t anInt  = " << anInt << endl;     
    cout << "\t intPtr = " << intPtr << endl;    

    return 0;
}

void changeValue(int* someInt)
{
    int localInt = 5551212;

    *someInt = localInt;   
    someInt = &localInt;   

    cout << endl << "Address of localInt = " << someInt << endl << endl; 

}
