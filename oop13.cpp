#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
   /* void setdata()
    {
        a = 10;
        b = 20;
    }*/
    void getdata()
    {
        cout << "value of a and b is : " << a << "and " << b << endl;
    }
    int geta(){return a;}
    int getb(){return b;}
    A()
    {
    }
};
class B : public A
{
public:
 int c;
void setdata(){
    cout<<"enter value of a,b,c "<<endl;
    cin>>a>>b>>c;
}
   
    //B(int p) { c = p; }
    void getdata1()
    {
        cout << "value of a ,b and c :" << a << " and " << b << " , " << c << endl;
    }
   
};
int main()
{
    B o;
    o.setdata();
    o.getdata();
    o.getdata1();
    return 0;
}