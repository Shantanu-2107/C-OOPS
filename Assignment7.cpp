//A university infromation system stores common details sucjh as name, age and cintact information for al individuals
//While student specific information such as roll number and branch is maintained seperately. Design an application
//that avoids duplication of common data by organising the ckasses appropriately.Use inheritance.

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

    class student : public person
    {
        public:
        int roll_number;
        string branch;

        student(string n, int a, string c, int r, string b) : person(n, a, c)
        {
            roll_number = r;
            branch = b;
            cout <<"Student details created"<<endl;
        }

        ~student()
        {
            cout <<"Student details destroyed"<<endl;
        }
    };

    int main()
    {
        student s1("John Doe", 20, "123-456-7890", 101, "Computer Science");
        display(s1);
        cout << "Roll Number: " << s1.roll_number << endl;
        cout << "Branch: " << s1.branch << endl;
        return 0;
    }

