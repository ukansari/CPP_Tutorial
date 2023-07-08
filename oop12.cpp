/*

->all about copy constructor and distructor .
->copy constructor is constructor who copy the object value.   
->ex :-  class_name z(z1); here z is tne object who copy the z1 object value.
->distructor is used to free or relesed dynamic memory of constructor  
when the work of constructor is done/over.  

*/


#include <iostream>
using namespace std;

class simple
{
    int a, b;

public:
    simple(int p, int q)
    {
        cout << "this for initialization value of p and q to a and b" << endl;

        a = p;
        b = q;
    }
    simple(simple &t)
    {
        cout << "this is a copy constructor " << endl;
        a = t.a;
        b = t.b;
    }
    ~simple()
    {
        cout << " this a distructor done  our work " << endl;
    }
    void display()
    {
        cout << "the value of a and b is " << a << "and" << b << endl;
    }
};

int main()
{
    simple s(12, 23), s1(23, 45);

    {
        s.display();

        s1.display();
        simple s3(s1);
        s3.display();
        simple s2(s);
        s2.display();
    }
    return 0;
}