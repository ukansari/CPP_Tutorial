#include<iostream>
using namespace std;

int main()
{
    
    int volume(int r , int h)
        {
            return(3.14*r*r*h);
        }
    int volume (int a)
        {
            return (a*a*a);
        }
    int volume (int l, int b , int h)
        {
            return (l*b*h);
        }   
    cout<<"\n volume of cylinder who dimention is 3 ,4 "<<volume(3,4)<<endl;

    cout<<"\n volume of cubiod who dimention is 3 ,4 ,5"<<volume(3,4,5)<<endl;

    cout<<"\n volume of cube who dimention is 4 "<<volume(4)<<endl;
    
    return 0;

}