#include <iostream>
#include<conio.h>
using namespace std;
/*
int main()
{
    int bank_balance = 1000;
    int w, pin, ch;
    

    cout << "select language " << endl;
    cout << "1.ENGLISH \t 2. HINDI \t 3. MARATHI \t 4.URDU " << endl;
    cin >> ch;
    
        switch (ch)
        {
        case 1:
            cout << "enter your PIN " << endl;
            cin >> pin;
            cout << "enter the amount you want to withdrawal " << endl;
            cin >> w;

            if (bank_balance > w)
            {
                if (w % 5 == 0)
                {
                    cout << "your available balance is " << (bank_balance - w) << endl;
                    cout << "thank you for transaction " << endl;
                }
                else
                {
                    cout << "enter amount in multipal of 5 " << endl;
                }
            }
            else
            {
                cout << "insafitiant bank balance " << endl;
                cout << "enter safitiant amount under " << bank_balance << endl;
            }
            break;
        default:
            break;
        }
  */




    /*case 2:
        cout << "enter your PIN " << endl;
        cin >> pin;
        cout << "enter the amount you want to withdrawal " << endl;
        cin >> w;

        if (bank_balance > w)
        {
            if (w == 5)
            {
                cout << "your available balance is " << (bank_balance - w) << endl;
                cout << "thank you for transaction " << endl;
            }
            else
            {
                cout << "enter amount in multipal of 5 " << endl;
            }
        }
        else
        {
            cout << "insafitiant bank balance " << endl;
            cout << "enter safitiant amount under " << bank_balance << endl;
        }
        break;

    case 3:
        cout << "enter your PIN " << endl;
        cin >> pin;
        cout << "enter the amount you want to withdrawal " << endl;
        cin >> w;

        if (bank_balance > w)
        {
            if (w == 5)
            {
                cout << "your available balance is " << (bank_balance - w) << endl;
                cout << "thank you for transaction " << endl;
            }
            else
            {
                cout << "enter amount in multipal of 5 " << endl;
            }
        }
        else
        {
            cout << "insafitiant bank balance " << endl;
            cout << "enter safitiant amount under " << bank_balance << endl;
        }
        break;
    case 4:
        cout << "enter your PIN " << endl;
        cin >> pin;
        cout << "enter the amount you want to withdrawal " << endl;
        cin >> w;

        if (bank_balance > w)
        {
            if (w == 5)
            {
                cout << "your available balance is " << (bank_balance - w) << endl;
                cout << "thank you for transaction " << endl;
            }
            else
            {
                cout << "enter amount in multipal of 5 " << endl;
            }
        }
        else
        {
            cout << "insafitiant bank balance " << endl;
            cout << "enter safitiant amount under " << bank_balance << endl;
        }
        break;
    default:
        break;
    }
    cout << "enter your PIN " << endl;
    cin >> pin;
    cout << "enter the amount you want to withdrawal " << endl;
    cin >> w;
*/

    /* if(bank_balance>w){
        if(w==5){
            cout<<"your available balance is "<<(bank_balance-w)<<endl;
            cout<<"thank you for transaction "<<endl;
        }
        else{
            cout<<"enter amount in multipal of 5 "<<endl;
        }
    }
    else{
        cout<<"insafitiant bank balance "<<endl;
        cout<<"enter safitiant amount under "<< bank_balance <<endl;
    }
}*/
int main(){
    int p;
    cout<<"enter number to check weather it is prime or not "<<endl;
    cin>>p;
    for (int i = 2; i <= p-1; i++)
    {
       if( p % i==0)
       {
           cout<<"number is not prime"<<endl;
           break;
       }
        else if(p % i != 0){
        cout<<"number is prime "<<endl;
        break;
       }
    }
    
    //cout<<"number is prime "<<endl;
    
    return 0;
}