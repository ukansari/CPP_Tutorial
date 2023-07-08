//#include<iostream>
//using namespace std;
/*
    int add(int p ,int q)
    {
        int c=p+q;
        return c;
    }
    void sub(int p ,int q)
    {
        int c=p-q;
      cout<<"\n subtration  of "<< p <<"and"<< q <<"is ="<<c <<endl;
    }
    
     void mul(int p ,int q)
    {
        int c=p*q;
      cout<<"\n multiplication  of "<< p <<"and"<< q <<"is ="<<c <<endl;
    }
     void division(int p ,int q)
    {
        int c=p/q;
      cout<<"\n division  of "<< p <<"and"<< q <<"is ="<<c <<endl;
    }
     void mod(int p ,int q)
    {
        int c=p%q;
      cout<<"\n moduls  of "<< p <<"and"<< q <<"is ="<<c <<endl;
    }

int main()
{
    int c,x,y;
    cout<<"hello world" <<endl;
    cout<<"\n this the first demo practical is going on please take a note and proceed"<<endl;
    cout<<"enter any two number"<<endl;
    cin>>x>>y;
    cout<<"\n before swapping the value of x = "<< x <<"and y = "<< y <<endl;
    c=x;
    x=y;
    y=c;
    cout<<"\n after swapping the value of x = "<< x <<"and y = "<< y <<endl;
    
    int d = add( x, y);
      cout<<"\n addition of "<< x <<"and"<< y <<"is ="<<d<<endl;
      sub(x,y);
      mul(x,y);
      division( x,y);
      mod(x,y);
     /* int main()
{
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    for(int i=1 ;i<=n ;i++)
    {
        for(int j=i ;j<=2*i-1 ;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}*/
  //    return 0;
//}


//snake game in c++
#include<iostream>

#include<conio.h>

using namespace std;

bool gameover;

const int width = 30;

const int height = 20;

int x, y, fruitX, fruitY, score;

int tailX[100], tailY[100]; //snake coordinates

int nTail;

enum eDirecton {STOP = 0, LEFT,RIGHT, UP, DOWN}; // Controls

eDirecton dir;

void Setup() {
gameover = false;

dir = STOP;

x = width / 2;

y = height / 2;

fruitX = rand() % width; //display fruit in a random place

fruitY = rand() % height; score = 0;

}

void Draw() {
system("cls");

for(int i = 0; i < width+2; i++)

cout << "#";

cout << endl ;

for (int i = 0; i < height ; i++) {

for (int j = 0; j < width; j++) {

if (j == 0)

cout << "#"; //walls

if (i == y && j == x)

cout << "*"; // snake tale

else if (i == fruitY && j == fruitX )

cout << "%"; // change it to change the fruit

else {

bool print = false;

for (int k = 0; k< nTail ; k++) {

if (tailX [k] == j && tailY [k] == i) {

cout << "*"; print = true;

}

}

if (!print) cout << " ";

}

if (j == width -1)

cout << "#";

}

cout << endl;

}

for (int i = 0; i< width+2; i++)

cout << "#";

cout << endl;

cout << "Score:" << score << endl ;

}

void Input ()
{

if (_kbhit ()) {

switch (_getch ()) {

case 'a':


dir = LEFT;

break;

case 'd':

dir = RIGHT;

break;

case 'w':

dir = UP;

break;

case 's':

dir = DOWN ;

break;

case 'x':

gameover = true;

break;

}

}

}

void algorithm()
{

int prevX = tailX [0];

int prevY = tailY [0];

int prev2X, prev2Y;

tailX[0] = x;

tailY[0] = y;

for(int i = 1;i < nTail ; i++) {

prev2X = tailX[i];

prev2Y = tailY[i];

tailX[i] = prevX;

tailY[i] = prevY;

prevX = prev2X;

prevY = prev2Y ;

}

switch (dir) {

case LEFT:

x--;

break;

case RIGHT:

x++;

break;

case UP:

y--;

break;

case DOWN:

y++;

break;

default:

break;

}

if (x >= width) x =0;else if (x <0) x = width -1;

if (y >= height) y = 0; else if (y < 0) y = height - 1;

for (int i =0; i< nTail ;i++)

if (tailX[i] == x && tailY[i] == y)
gameover = true;

if (x == fruitX && y == fruitY) {

score +=10;

fruitX = rand() % width;

fruitY = rand() % height;

nTail ++;

}

}

int main()
{

Setup();

while (!gameover) {

Draw ();

Input ();

algorithm ();

}

return 0;

}