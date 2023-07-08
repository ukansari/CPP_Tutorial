/*
in this question we covered constructors in derived class concept
-->the costructors for virtual base class are invoked before a non-virtual base classes
---> and also covered initialization list in constructor
syntax for
constructor_name (argument ): initialization section
syntax for constructor in derived class
constructor name(argument,... ):base1(arg ,...), base2(arg, ....){}
 */
#include<iostream>
using namespace std;

class base1{
    int a,b;
    public:
    base1(int p, int q):a(p),b(q){//inilialization list
        cout<<"value of a = "<<a<<" value of b = "<<b<<endl;
     
cout<<"base1 constructor called "<<endl;
    }
};
class base2{
    int c,d;
    public:
    base2(int t, int u):c(t),d(u){
        cout<<"value of c = "<<c<<" value of d = "<<d<<endl;
cout<<"base2 constructor called "<<endl;
    }
};
class derived : public base1 , public base2{
private:
int e,f;
public:
derived(int l ,int m ,int n ,int o,int x, int w):base1(l,m),base2(n,o){//constructor in derived class
    e=x;
    f=w;
    cout<<"derived costructor invoked "<<endl;
}
void display(){
    
    cout<<"value of e = "<<e<<" value of f = "<<f<<endl;
}
};
int main(){
    derived d(1,2,3,4,5,6);
    d.display();
    return 0;
}