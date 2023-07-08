#include <iostream>
using namespace std;

int main()
{
    int num,m,d;
    
    int rev = 0;
    cout << "enter any number " << endl;
    
    cin >> num;
    m=num;
    while (num > 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
    
        num = num / 10;
    }
    cout << "reverse number of "<< m <<" is : " << rev << endl;
    if (m == rev)
    {
        cout << "the number is palindorium " << endl;
    }
    return 0;
}