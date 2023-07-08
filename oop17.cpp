/*
this is the exircise question for better understanding the concept of inheritance
this question cover multiple inheritance and also cover ambigouty in inheritance
ambigouty-->two functions are same name in different classes , at the time of inheriting the compiler 
confused to take which one from which one class 
simply we write the function name with postior of class name with ::

*/
#include <iostream>
#include<cmath>
using namespace std;

class simple_calculator{
    int a,b;
    public:
    void get_simple_number(){
        cout<<"enter the value for simple calculation "<<endl;
        cout<<"enter value of a and b number "<<endl;
        cin>>a>>b;

    }
    void say(){
        cout<<" this c++ tutoria "<<endl;
    }
    void simple_operation(){
        cout<<"value of a + b is :"<<a+b<<endl;
        cout<<"value of a - b is :"<<a-b<<endl;
        cout<<"value of a x b is :"<<a*b<<endl;
        cout<<"value of a / b is :"<<a/b<<endl;
        cout<<"value of a % b is :"<<a%b<<endl;
    }
};
class scientific_calculater{
    int c,d;
    public:
    void get_scientific_number(){
        cout<<"enter the value for scientific calculation "<<endl;
        cout<<"enter value of c and b number "<<endl;
        cin>>c>>d;
    }
    void say(){
        cout<<"hello i am learning c++ "<<endl;
    }
    void scientific_operation(){
    cout<<"value of sin(a) is : "<<sin(c)<<endl;
    cout<<"value of cos(a) is : "<<cos(c)<<endl;
    cout<<"value of tan(b) is : "<<tan(d)<<endl;
    cout<<"value of exp(b) is : "<<exp(d)<<endl;
    }
};
class hybrid : public simple_calculator ,public scientific_calculater{
public:
void hello(){
    simple_calculator:: say();//avoid the ambiguoty we use class name to specify the function to take from 
}
void display(){
    cout<<"your are in hybrid class "<<endl;
}
};
int main(){
    hybrid h;
    h.get_simple_number();
    h.simple_operation();
    h.get_scientific_number();
    h.scientific_operation();
    h.hello();
    h.display();
    return 0;
}