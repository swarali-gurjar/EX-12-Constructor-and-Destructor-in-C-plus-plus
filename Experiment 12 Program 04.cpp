//Copy Constructor
#include<iostream>
using namespace std;
class Student
{
    int age;
    string name;
    
    public:
    Student(string n,int a)
    {
        name=n;
        age=a;
    }
    Student(const Student &s)
    {
        name=s.name;
        age=s.age;
        cout<<"Copy Constructor called!"<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Student s1("Swarali",19);
    Student s2=s1;
    cout<<"Original Object: ";
    s1.display();
    cout<<"Copied Object: ";
    s2.display();
    return 0;
}
