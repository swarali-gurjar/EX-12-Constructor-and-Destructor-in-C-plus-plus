//Defining default constructor inside a class
#include <iostream>
using namespace std;
class student 
{
    int rollno;
    char name[50];
    double fees;
public:
    student() 
    {
        cout << "Enter the Roll number: ";
        cin >> rollno;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Fees: ";
        cin >> fees;
    }
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }
};
int main() {
    student s; 
    s.display();
    return 0;
}
