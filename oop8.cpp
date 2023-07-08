#include <iostream>
using namespace std;

class B;
class A
{
    int a;
    int b;

public:
    void setvalue()
    {
        cout << "enter the real and imagnary part of complex number for class A " << endl;
        cin >> a >> b;
    }
    void printvalue()
    {
        cout << "the complex number is " << a << " + " << b << " i " << endl;
    }
    friend void addcomplex(A a1, B b1);
    
    
};

class B
{
    int p;
    int q;

public:
    void setvalue()
    {
        cout << "enter the real and imagnary part of complex number for class B " << endl;
        cin >> p >> q;
    }
    void printvalue()
    {
        cout << "the complex number is " << p << " + " << q << " i " << endl;
    }
    friend void addcomplex(A a1, B b1);
    
};
void addcomplex(A a1, B b1)
{
    A c;
    c.a = a1.a + b1.p;
    c.b = a1.b + b1.q;
    cout << "addition of two copmlex number from two diferent classes is :" << c.a << " + " << c.b << " i " << endl;
}

int main()
{
    A a1;
    B b1;
    a1.setvalue();
    b1.setvalue();

    a1.printvalue();
    b1.printvalue();

    addcomplex(a1, b1);
   
   
    return 0;
}