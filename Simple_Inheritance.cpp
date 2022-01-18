// C++ program to demonstrate inheritance
#include <iostream>
using namespace std;
class Animal {
   public:
    void show()
    {
        cout<< "I am an animal!" << endl;
    }
};

class Dog : public Animal 
{
 
   public:
    void bark() 
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.show();
    dog1.bark();
    return 0;
}