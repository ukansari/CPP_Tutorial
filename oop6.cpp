/* 
this is a program for friend function 
friend function  access the private member variable with the class permission 
f.f is not member function of the class

*/

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setvalue(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printvalue()
    {
        cout << "the complex number is :" << a << " + " << b << " i " << endl;
    }
    friend complex sumvalue(complex c1, complex c2);
   
   
};
complex sumvalue(complex c1, complex c2)
{
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    cout << "addition of two complex number is :" << c3.a << " + " << c3.b << " i " << endl;
}

int main()
{
    complex c1, c2;
    c1.setvalue(5, 7);
    c2.setvalue(4, 6);

    c1.printvalue();
    c2.printvalue();

    complex sum = sumvalue(c1, c2);
   
    
    return 0;
}