#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"******************************"<<endl;
        cout<<"the id of an item is    : "<<id<<endl;
        cout<<"the price of an item is : "<<price<<endl;
    
    }
    void design(){
        cout<<"##############################"<<endl;
    }
};
int main()
{
    int size=3;
    ShopItem *ptr =new ShopItem[size];
    ShopItem *ptrTemp= ptr;
    int p,i;
    float q;
    for ( i = 0; i < size ;i++)
    {
        cout<<"enter the value of id and price of item number "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for ( i = 0; i < size ;i++)
    {
        ptrTemp->getData();
        ptrTemp->design();
        ptrTemp++;
    }
    return 0;
}