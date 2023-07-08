

#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary ;
    string name;
    string city;
public:
    void setid()
    {
    
        cout << "enter employee id   " << endl;
        cin >> id;
        cout << "enter employee name  " << endl;
        cin >> name;
        cout << "enter employee city   " << endl;
        cin >> city;
        cout << "enter employee salary   " << endl;
        cin >> salary;
        

        

    
    }
    void printid()
    {
        cout << "employee id is :" << id << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 1; i < 4; i++)
    {
        fb[i].setid();
        fb[i].printid();
    }
    return 0;
}