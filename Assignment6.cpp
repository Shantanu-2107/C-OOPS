#include <iostream>
using namespace std;
class employee
{
    public:
    int eid;
    string name;
    int salary;

    employee(int id, string n, int s)
    {
        eid = id;
        name = n;
        salary = s;
        cout <<"Employee Id created"<<endl;
       }

    ~employee()
    {
        cout <<"Employee Id destroyed"<<endl;
    }
};

int main()
{
    employee e1(101, "Tony stank", 10000000);
    cout << "Employee Id: " << e1.eid << endl;
    cout<< "Employee Name: " << e1.name << endl;
    cout << "Employee Salary: " << e1.salary << endl;
    return 0;
}
