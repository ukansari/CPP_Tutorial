#include<iostream>
using namespace std;
class base{
    protected:
    int base1;
    public:
    base(int a){
        base1=a;
    }
    virtual void display(){
        cout<<"tne value of base class variable is: "<<base1<<endl;
    }
};
class derived:public base {
    protected:
    int derived1;
    public:
    derived(int a,int b):base(a){
        derived1=b;
    }
    void display(){
        cout<<"tne value of base class variable is: "<<base1<<endl;
        cout<<"tne value of derived class variable is: "<<derived1<<endl;
    }
};
int main(){
    base *base_pointer;
   // base obj_base;
    derived obj_derived(45,66);
    base_pointer=&obj_derived;
  //  base_pointer->setdata(45);
    base_pointer->display();
}