//declaration of member variable as array in class
#include<iostream>
using namespace std;

class shop{
    int itemid[50];
    int itemprice[50];
    int dis[50];
    int counter;
    public:
    void setcounter()
    {
        counter=0;
    }
    void setprice();
    void displayprice();
};
void shop :: setprice()
{
    cout<<"enter item id of item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter item price"<<endl;
    cin>>itemprice[counter];
    cout<<"enter discount for item"<<endl;
    cin>>dis[counter];
    counter++;
}
void shop :: displayprice()
{
    for(int i=0 ;i<counter;i++)
    {
        cout<<"the price of a item with item id  "<<itemid[i]<<" is "<<itemprice[i]<<" of discount is "<<dis[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.setcounter();
    for(int i=1;i<=3;i++)
    {
    dukaan.setprice();
    }
    dukaan.displayprice();
    return 0;
}
