//Function overload
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}
int main()
{
    cout<<"Add(25,5)= "<<add(25,5)<<endl;
    cout<<"Add(12.5,10.5)= "<<add(12.5,10.5)<<endl;
    cout<<"Add(2,1,3)= "<<add(2,1,3)<<endl;
    cout<<"Add(5,6,7)= "<<add(5,6,7)<<endl;
    
    return 0;
}
