//Parameterized Constructor
#include<iostream>
using namespace std;
class multiplication
{
    int a,b;
    int multiply;
    public:
    multiplication(int m,int n)
    {
        a=m;
        b=n;
        multiply=a*b;
    }
    void display()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
        cout<<"Product: "<<multiply<<endl;
    }
};
int main()
{
    multiplication mul(2,5);
    mul.display();
    return 0;
}
