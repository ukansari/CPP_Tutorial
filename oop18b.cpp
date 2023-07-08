#include <iostream>
using namespace std;
class car
{
protected:
    int wheel;
    int seats;
    int gare;
    int model;

public:
    car(int w, int s, int g, int m) : wheel(w), seats(s), gare(g), model(m)
    {
        cout << "car class constructor called " << endl;
    }
};
class sports_car : public car
{
protected:
    int speed;
    int avg;

public:
    sports_car(int a, int b, int c, int d, int e, int f) : car(a, b, c, d)
    {
        speed = e;
        avg = f;
        cout << "you are in spotrs car constructor " << endl;
    }
    void display()
    {
        cout << "the car has " << wheel << " wheels " << endl;
        cout << "the car has " << seats << " seats " << endl;
        cout << gare << " number of gare " << endl;
        cout << model << " car model " << endl;
        cout << "speed of sports car is " << speed << "km/hr" << endl;
        cout << "average of sports car is " << avg << "km/hr " << endl;
    }
};
int main()
{
    sports_car sc(4, 6, 5, 2015, 350, 35);
    sc.display();
    return 0;
}