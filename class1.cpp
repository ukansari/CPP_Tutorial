#include<iostream>
using namespace std;

class vowel{
    string s;
    public:
    void getdata()
    {
        cout<<"\n enter any string"<<endl;
    }
    void showdata()
    {
        for(int i=1 ; i<=7 ; i++)
        {
            cout<<"\n string is "<<s.at(i)<<endl;
        }
    }
    void compdata()
    {
        for(int i=1 ; i<=7 ; i++)
        {
            if(s.at(i)=='a' && s.at(i)=='e' && s.at(i)=='i' && s.at(i)=='o' && s.at(i)=='u')
            {
            cout<<"\n string contain vowels"<<endl;
            }
            else
            {
            cout<<"\n string does not contain vowel"<<endl;
            }        
        }
    }
};
int main()
{
    vowel a;
    cout<<"\n PROGRAM FOR SEARCHING THE VOWELS IN THE STRING "<<endl;
    a.getdata();
    a.showdata();
    cout<<"\n ANALYSIS THE STRING "<<endl;
    a.compdata();

    return 0;
}

