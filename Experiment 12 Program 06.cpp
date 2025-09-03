//Using overload constructor
#include<iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    double fees;
    
  public:

Student(int r, string n)
{
    rollno=r;
    name=n;
    fees=0.0;
}
Student(int r, string n, double f)
{
    rollno=r;
    name=n;
    fees=f;
}
void display()
{
    cout<<"Roll number: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Fees: "<<fees<<endl;
}
};
int main()
{
    Student s1(105,"Amit");
    Student s2(106,"Priyanka",4500);
    
    cout<<"Student 1 Details:\n";
    s1.display();
    cout<<"Student 2 Details:\n";
    s2.display();
    
    return 0;
}
