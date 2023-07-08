#include <iostream>
using namespace std;

class bank
{
    int p;
    int y;
    float r;
    int R;
    float amount;

public:
   
    bank() {}
    
    bank(int p1, int y1, int R1);
    bank(int p1, int y1, float r1);
    void showamount()
    {
        cout << "amount after " << y << " years is = " << amount << endl;
    }
  
};

/*bank ::bank(int p1, int y1, int R1)
{
    p = p1;
    y = y1;
    r = float(R1) / 100;
    amount = p;
    for (int i = 1; i <= y; i++)
    {
        amount = amount * (1 + r);
    }
    // amount = amount * (1 + r);
}
bank ::bank(int p1, int y1, float r1)
{
    p = p1;
    y = y1;
    r = r1;
    amount = p;
    for (int i = 1; i <= y; i++)
    {
        amount = amount * (1 + r);
    }

    // amount = amount * (1 + r);
}
*/
int main()
{

    bank b1, b2, b3;
    int p1, y1, r1;
    float R1;
    
  
  
  
  /*  cout << "enter the value of p1 , y1 and r1 " << endl;
    cin >> p1 >> y1 >> r1;

    b1 = bank(p1, y1, r1);
    b1.showamount();

    cout << "enter the value of p1 , y1 and R1 " << endl;
    cin >> p1 >> y1 >> R1;
   
    
     b2=bank(p1, y1, R1);
    b2.showamount();
*/
    return 0;
}
