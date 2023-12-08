// The word “polymorphism” means having many forms

// Types of Polymorphism:
// Compile-time Polymorphism
// Runtime Polymorphism

//---------------- Compile-Time Polymorphism
// This type of polymorphism is achieved by function overloading or operator overloading.

// ------Function Overloading:
// When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded,

// ------Function Overriding:
// Function Overriding occurs when a derived class has a definition for one of the member functions of the base class.
// That base function is said to be overridden.

//--------------------------------------------------------------example of function overloading:
#include <iostream>
using namespace std;
class Geeks
{
public:
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

int main()
{
    Geeks obj1;

    // func() is called with int value
    obj1.func(7);

    // func() is called with double value
    obj1.func(9.132);

    // func() is called with 2 int values
    obj1.func(85, 64);
    return 0;
}

//--------------------------------------------------------------- Example of function overriding
#include <iostream>
using namespace std;

class Base
{
public:
    void Target()
    {
        // statement
    }
};

class Child : public Base
{
public:
    void Target() // overriding base class's method Target()
    {
        // statement changed
    }
};

int main()
{
}