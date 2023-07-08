#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setvalue(int v1, int v2){
        a=v1;
        b=v2;
    }
    void addnumber(complex a1,complex a2){
        a=a1.a+a2.a;
        b=a1.b+a2.b;
    }
    void subtractnumber(complex o1 ,complex o2)
    {
        a=o1.a-o2.a;
        b=o1.b-o2.b;
    }
    void display()
    {
        cout<<"addition of two complex number is :     "<< a <<" + "<< b <<" i"<<endl;
    }
    void dissub()
    {
        cout<<"subtraction  of two complex number is : "<< a <<" - "<< b <<" i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;

    c1.setvalue(3,5);
    c1.display();
    c1.dissub();

    c2.setvalue(6,9);
    c2.display();
    c2.dissub();

    c3.addnumber(c1,c2);
    c3.display();

    c3.subtractnumber(c1,c2);
    c3.dissub();
    
    return 0;
}