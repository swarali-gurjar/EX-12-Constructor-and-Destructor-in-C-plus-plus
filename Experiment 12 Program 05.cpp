//Destructor in C++
#include <iostream>
using namespace std;

int count = 0;

class destruct
{
public:
    destruct()  
    {
        count++;
        cout << "Number of objects created: " << count << endl;
    }

    ~destruct()  
    {
        count--;
        cout << "Number of objects destroyed: " << count << endl;
    }
};

int main()
{
    destruct aa, bb, cc;
    {
        destruct dd;
    } 
    return 0;
}
