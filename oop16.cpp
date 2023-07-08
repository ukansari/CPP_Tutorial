/*
virtual base class  
student --->exam(virtual base class with single inheritance)
student---->sports(virtual base class with single inheritance)
exam, sports--->reult( derived class with multiple  inheritance)
              --------------student----------
              |                               |         
            exam                           sports
             ---------------------------------
                            |
                          result
*/
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_number(int r)
    {
        roll_number = r;
    }
    void print_number()
    {
        cout << "roll number is : " << roll_number << endl;
    }
};
class exam : virtual public student
{
protected:
    float math, physics;

public:
    void set_mark(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_mark()
    {
        cout << "the result is :" << endl;
        cout << "math mark is : " << math << endl
             << "physics mark is : " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << " score is :" << score << endl;
    }
};
class result : public exam, public sports
{
    private:
    float total;

public:
    //total = math + physics + score;
    void display()
    {
        print_number();
        print_mark();
        print_score();
        cout << "the total marks is : " <<  math + physics + score << endl;
    }
};

int main()
{
    result res;
    res.set_number(313);
    res.set_mark(89.6, 92.3);
    res.set_score(9);
    res.display();
    return 0;
}