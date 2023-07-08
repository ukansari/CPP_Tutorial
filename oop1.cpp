//find and compare the given no. is binary or not.
#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read()
    {
        cout<<"\n enter any binary number"<<endl;
        cin>>s;
    }
  
    void display()
        {
            for(int i=0 ; i< s.length() ; i++)
            {
                cout<<s.at(i);
            }
        }
    void comp_bin()
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
              cout<<"\n incorrect binary formate"<<endl;
              exit(0);
            }
        }
    }
    void once_bin()
    {
        cout<<"\n once compliment of a binary number is "<<endl;
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';

            }
            else
            {
                s.at(i)='0';
            }

        }
        cout<<endl;
    }
    
};

class no{
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1, int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void getdata()
    {
        cout<<"\n value of a is ="<<a<<endl;
        cout<<"\n value of b is ="<<b<<endl;
        cout<<"\n value of c is ="<<c<<endl;
        cout<<"\n value of d is ="<<d<<endl;
        cout<<"\n value of e is ="<<e<<endl;
    }
}umair,kamran,ansari;

int main()
{
 binary abc;
 abc.read();
 
 abc.comp_bin();
 abc.once_bin();
 abc.display(); 
 
/* umair.d=15;
 umair.e=23;
 kamran.d=34;
 kamran.e=45;
 ansari.d=445;
 ansari.e=266;
 umair.setdata(3,5,7);
 kamran.setdata(90,67,78);
 ansari.setdata(908,678,56);
 cout<<"\n value for umair variable"<<endl;
 umair.getdata(); 
 cout<<"\n value for kamran variable"<<endl;
 kamran.getdata(); 
 cout<<"\n value for ansari variable"<<endl;
 ansari.getdata();*/ 
 return 0;  
}