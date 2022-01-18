// Program to illustrate friend function
#include <iostream>
using namespace std;
class integer
{
    int a, b;
public:
    void set_value()
    {
        a = 50;
        b = 30;
    }
    friend int mean(integer s); //declaration of friend function
};

int mean(integer s)
{
    return int(s.a + s.b) / 2.0; //friend function definition
}
int main()
{
    integer c;
    c.set_value();
    cout << "Mean value:" << mean(c);
    return 0;
}