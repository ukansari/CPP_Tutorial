#include <iostream>
using namespace std;
int main(){
    cout<<" # # # # # # # # # # # # # # #  "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<" #                           # "<<endl;
    }
    cout<<" # # # # # # # # # # # # # # #  "<<endl;
    cout<<endl;
    for (int i = 0; i < 30 ;i++)
    {
        cout<<"/ ";
    }
    cout<<endl;
  for (int i = 0; i < 10; i++)
  {
      for (int j = 0; j < i; j++)
      {
          cout<<"* ";
      }
      cout<<endl;
  }
  
    return 0;
}
