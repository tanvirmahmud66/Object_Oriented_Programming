// in c++ base constructor will automatic called (for not parameterized constructor)

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor from A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor from B" << endl;
    }
};

int main()
{
    B b1;
}

// ------------------------------------ perermeterized constructor---------------------
#include <iostream>

// Base class
class Base
{
public:
    Base(int value)
    {
        std::cout << "Base class constructor with value: " << value << std::endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Derived class constructor using member initializer list to call the base class constructor
    Derived(int value, int derivedValue) : Base(value)
    {
        std::cout << "Derived class constructor with derivedValue: " << derivedValue << std::endl;
    }
};

int main()
{
    // Creating an object of the derived class
    Derived derivedObj(10, 20);

    return 0;
}