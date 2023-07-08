#include <iostream>
using namespace std;

class base
{
    int a;

public:
    int b;
    void setA(int p)
    {
        a = p;
    }
    int get_a()
    {
        return a;
    }
};
class derived : private base
{
    int c;

public:
    void setvalue(int p, int q)
    {
        setA(7);
        c = p;
        b = q;
    }

    void display()
    {
        cout << "c is " << c << endl;
        cout << "b is :" << b << endl;
        cout << "addition of c and b is :" << c + b << endl;
        cout << "addition of a,b,c is:" << c + b + get_a() << endl;
        cout << "value of a from base class " << get_a() << endl;
    }
};

int main()
{
    derived d;
    d.setvalue(28, 19);
    d.display();
    return 0;
}