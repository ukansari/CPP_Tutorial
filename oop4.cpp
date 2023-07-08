//topic:- static member variable and static member function
//static member variable is share their value to every one who's need
//to access static member variable static member function is used

#include <iostream>
using namespace std;

class employee
{
    int e_id;
    string e_name;
    int e_salary;
    string e_city;
    static int e_shift;

public:
    void get_info(void);
    void diplay_info(void);

    static void get_shift()
    {
        cout << "shift timing of an employee is " << e_shift << endl;
        e_shift = e_shift + 6;
        //cout<<e_id;
    }
};

void employee ::get_info()
{
    cout << "enter employee id " << endl;
    cin >> e_id;
    cout << "enter employee name " << endl;
    cin >> e_name;
    cout << "enter employee salary " << endl;
    cin >> e_salary;
    cout << "enter employee address " << endl;
    cin >> e_city;
    //cout << "enter employee shift " << endl;
    //cin >> e_shift;
}
void employee ::diplay_info()
{
    cout << "employee id : " << e_id << endl;
    cout << "employee name : " << e_name << endl;
    cout << "employee address : " << e_city << endl;
    cout << "employee salary : " << e_salary << endl;
    //cout << "employee shift = " << e_shift << endl;
}
int employee ::e_shift = 10;

int main()
{
    employee rohan, amit, harsh;
    rohan.get_info();
    rohan.diplay_info();
    employee::get_shift();

    /*amit.get_info();
    amit.diplay_info();
    employee::get_shift();

    harsh.get_info();
    harsh.diplay_info();
    employee::get_shift();*/

    return 0;
}
