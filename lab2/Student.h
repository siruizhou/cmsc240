#include <string>

using namespace std;

class Student
{
    private:
      
        int    ur_id;
        string name;
        string netid;

    public:

        Student(string a_name, int a_ur_id, string a_netid);
        ~Student();

        void print();
        void setName(string new_name);
        void setNetID(string new_netid);
        void setURID(int new_ur_id);
};
