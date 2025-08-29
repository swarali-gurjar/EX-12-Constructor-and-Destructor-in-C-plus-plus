//Defining default constructor outside a class
#include <iostream>
using namespace std;
class Mycar
{
    int carno;
    char name[50];
    double price;
public:
    Mycar();
    void display();
};
     Mycar::Mycar()
     {
        cout << "Enter the Car number: ";
        cin >> carno;
        cout << "Enter the Car Name: ";
        cin >> name;
        cout << "Enter the Car price: ";
        cin >> price;
    }
    void Mycar::display()
    {
        cout << "\nCar Details:\n";
        cout << "Car number: " << carno << endl;
        cout << "Car Name: " << name << endl;
        cout << "Car Price: " << price << endl;
    }

int main() {
Mycar s; 
    s.display();
    return 0;
}
