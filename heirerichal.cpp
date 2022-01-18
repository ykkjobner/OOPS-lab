#include <iostream>
using namespace std;
class shape
{

public:
    int a=5,b=6;
};
class rectangle : public shape
{
public:
    void area1()
    {
        cout << "area of rectangle" << (a * b )<< endl;
    }
};

class traingle : public shape
{
private:
    /* data */
public:
    void area2()
    {
        cout << "Area of triangle: " << (0.5 * a * b) << endl;
    }
};

int main()
{
    rectangle r1;
    traingle t1;
    r1.area1();
    t1.area2();
    return 0;
}