
#include <iostream>
using namespace std;
class employee
{
public:
int eId;
string ename;
int esalary;

void display()
{
  
  cout<<"Employee ID:"<<eId<<endl;

  cout<<"Employee Name:"<<ename<<endl;;
  
  cout<<"Employee Salary:"<<esalary<<endl; 
 
}
};

int main()
{
    employee e1;
    cout<<"Enter Employee ID:";
    cin>>e1.eId;

    cout<<"Enter Employee Name:";
    cin>>e1.ename;

    cout<<"Enter Employee Salary:";
    cin>>e1.esalary;

    e1.display();

    return 0;
}