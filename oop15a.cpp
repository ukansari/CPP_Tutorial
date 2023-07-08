/*
this is the multilevel inheritance question 
student ---->exam ---->result

*/
#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r)
    {
        roll_number=r;
    }
    void get_roll_number(){
        cout<<"student roll number : "<<roll_number<<endl;
    }

};
class exam:public student{
    protected:
    float math;
    float physics;
    public:
    void set_marks(float m1 , float m2){
        math=m1;
        physics=m2;
    }
    void get_marks(){
        cout<<"math marks : "<<math<<endl;
        cout<<"physics marks : "<<physics<<endl;
    }
};
class result : public exam{
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"result is : "<<(math+physics)/2<<"%"<<endl;  
    }
};

int main(){
    result res;
    res.set_roll_number(1024);
    res.set_marks(92.0 ,87.0);
  /*  for (int i = 0; i < 2; i++)
    {
        cout<<(i+1)<<" student "<<endl;
        
    }
    */
        res.display();
    return 0;
}