//to display the information about employee
#include<iostream>
using namespace std;

class emp{

    int emp_id;
    string emp_name;
    double emp_mob;
    string emp_add;
    double emp_sal;

public:
    
void read_info(){
   
    cout<<"\n enter employee id "<<endl;
    cin>>emp_id;
    cout<<"\n enter employee name "<<endl;
    cin>>emp_name;
    cout<<"\n enter employee mobile number "<<endl;
    cin>>emp_mob;
    cout<<"\n enter employee address "<<endl;
    cin>>emp_add;
    cout<<"\n enter employee salary "<<endl;
    cin>>emp_sal;
    
}
void display_info(){
    //cout<<"\n ALL INFORMATION ABOUT EMPLOYEE IS MENTIONED BELOW"<<endl;
    //cout<<"\n ID \t NAME \t MOBILE NO. \t ADDRESS \t salary "<<endl;
    
    cout<<emp_id<<"\t"<<emp_name<<"\t"<<emp_mob<<"\t"<<emp_add<<"    \t"<<emp_sal<<endl;

}

};

int main()
{
    int n;
    emp raj[15];
    
    cout<<"\n how many employee information you want to insert "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<(i+1)<<" employee information  "<<endl;
    
    raj[i].read_info();
    }
    cout<<"\n ALL INFORMATION ABOUT EMPLOYEE IS MENTIONED BELOW"<<endl;
    cout<<"\n ID \t NAME \t MOBILE NO. \t ADDRESS \t salary "<<endl;

    for(int i=0; i<n; i++)
    {

    raj[i].display_info();
    }
    return 0;
}