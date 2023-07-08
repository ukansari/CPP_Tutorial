/* 
                   contructor
constructor has same name as class 
it has no data type even void and not return value 
it is used to initialized the object of a class
it should declare in public section of a class
default constructor doesn't take any parameter
we cannot refers to their address
it is automatically invoked(called) when object is created

*/
#include <iostream>
using namespace std;

class sample
{
    int a, b;

public:
    sample()
    {
        a = 1;
        b = 2;
    }
    sample(int p, int q)
    {
        a = p;
        b = q;
    }
   
    sample(int p, int q,int r)
    {
        a = p;
        b = q;
    }
    sample(int p)
    {
        a = p;
        b = 11;
    }

    void printvalue()
    {
        cout << "value of a and b is " << a << " and " << b << endl;
    }
};
int main()
{
    sample s1, s2(12, 23), s3(34, 45, 67), s4(54), s5(90, 98);
    s1.printvalue();
    s2.printvalue();
    s3.printvalue();
    s4.printvalue();
    s5.printvalue();
    return 0;
}