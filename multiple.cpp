#include <iostream>
using namespace std;
class college
{
public:
    void clg()
    {
        cout << "for higher studies" << endl;
    }
};
class school
{
public:
    void sch()
    {
        cout << "board exams" << endl;
    }
};

class coaching : public college, public school
{
private:
    /* data */
public:
    void coach()
    {
        cout << "For better results" << endl;
    }
};

int main()
{
    coaching c1;
    c1.clg();
    c1.coach();
    c1.sch();
    return 0;
}