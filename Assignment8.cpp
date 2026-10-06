///An organization maintains records of its workforce. Every manager is an employee, and
//every employee is a person. Design an application that progressively extends the available
//information at each level while reusing the common details already defined

#include <iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    string contact;

    person(string n, int a, string c)
    {
        name = n;
        age = a;
        contact = c;
        cout <<"Person details created"<<endl;
    }

    ~person()
    {
        cout <<"Person details destroyed"<<endl;
    }
};

void display(person p)
{
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Contact: " << p.contact << endl;
}

class employee : public person
{
    public:
    int eid;
    int salary;

    employee(string n, int a, string c, int id, int s) : person(n, a, c)
    {
        eid = id;
        salary = s;
        cout <<"Employee details created"<<endl;
    }

    ~employee()
    {
        cout <<"Employee details destroyed"<<endl;
    }
};

int main()
{
    employee e1("Ayush", 20, "123-456-7890", 101, 1);
    display(e1);
    cout << "Employee Id: " << e1.eid << endl;
    cout << "Employee Salary: " << e1.salary << endl;
    return 0;
}