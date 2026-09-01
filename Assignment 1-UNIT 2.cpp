#include<iostream>
using namespace std;
class book
{
    public:
    int bId;
    string bname;
    float price;

    book()
    {
        bId=0;
        bname="";
        price=0.0;
    }
    book(int i,string t,float p)
    {
        bId = i;
        bname = t;
        price = p;

    }

    void display()
    {
        cout<<"Book ID:"<<bId<<endl;

        cout<<"Book name:"<<bname<<endl;

        cout<<"Book price:"<<price;
    
    }
};

int main()
{
    book b1(77,"OOP",101);
    b1.display();
    return 0;
}