#include<iostream>
using namespace std;

class base{
    int a;
    public:
    int b;
    
    void setdata(int p,int q){
        a=p;
        b=q;
    }
    /*
    void setdata(){
        cout<<"enter the value of a and b "<<endl;
        cin>>a>>b;
    }
    */
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};
class derived : private base{
    int c;
    public:
   /* void set_c(){
        cout<<"enter the value of c "<<endl;
        cin>>c;

    }*/
    
    
    
    void process(){
        setdata(5,10);
        c=get_a() * get_b();
    }
    void display(){
        cout<<"value of A is equal to : "<< get_a() <<endl;
        cout<<"value of B is equal to : "<< b <<endl;
        cout<<"value of C is equal to : "<<c<<endl;    
    }
};
int main(){
    
    derived d;
    
    d.process();
    d.display();

    return 0;
}