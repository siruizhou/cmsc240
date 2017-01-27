#include <iostream>
#include "Student.h"

using namespace std;

void change(Student& stu);
void changeViaPtr(Student* stuPtr);

int main()
{
    Student* first = new Student("lilly lawson", 11112222, "ll1ab");
    Student  second("bailey hoyt", 22223333, "bh2bc");    

    first->print();
    second.print();

    first->setName("s zhou");
    first->setNetID("sz2fw");
    first->setURID(99999999);
    first->print();

    second.setName("s zhou");
    second.setNetID("sz2fw");
    second.setURID(99999999);
    second.print();

    //change value using a reference
    change(*first);
    change(second);
    first->print();
    second.print();

    //change value using a pointer 
    changeViaPtr(first);
    first->print();


    delete(first);
    return 0;
}

//change student data using reference type
void change(Student& stu)
{
	stu.setName("sirui");
	stu.setNetID("sssss");
	stu.setURID(00000000);
}

//change student data using a pointer type
void changeViaPtr(Student* stuPtr)
{
	stuPtr->setName("pointer");
	stuPtr->setNetID("pppp");
	stuPtr->setURID(01010101);
}