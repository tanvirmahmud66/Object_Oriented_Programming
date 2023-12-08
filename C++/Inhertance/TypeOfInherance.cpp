// single inheritance
// multilevel inheritance
// multiple inheritance
// Hierarchical inheritance
// Hybrid inheritance

// ------------- single inheritance------------------------------------------------------------------
// a class is allowed to inherit from only one class. one subclass is inherited by one base class only
#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle constructor called" << endl;
    }
};

class Car : public Vehicle
{
};

int main()
{
    Car c1;
}

// ------------- Multiple Inheritance-------------------------------------------------------------------
// class can inherit from more than one class
// one subclass is inherited from more than one base class.
#include <iostream>
using namespace std;

// first base class
class Vehicle
{
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle\n";
    }
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler
{
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}

//------------------------ multilevel inheritance --------------------------------------------------------
// a derived class is created from another derived class.

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};

// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler
{
public:
    Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}

//------------------------- Hierarchical Inheritance----------------------------------------------------------
// more than one subclass is inherited from a single base class
// more than one derived class is created from a single base class.

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle
{
};

// second sub class
class Bus : public Vehicle
{
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base class.
    Car obj1;
    Bus obj2;
    return 0;
}

// --------------------- Hybrid inheritance------------------------------------------------------------
// Hybrid Inheritance is implemented by combining more than one type of inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare
{
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};

// first sub class
class Car : public Vehicle
{
};

// second sub class
class Bus : public Vehicle, public Fare
{
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base class.
    Bus obj2;
    return 0;
}

//----------------- speacial multipath inheritance----------------------------------------------------------
// A derived class with two base classes
// and these two base classes have one common base class is called multipath inheritance

#include <iostream>
using namespace std;

class ClassA
{
public:
    int a;
};

class ClassB : public ClassA
{
public:
    int b;
};

class ClassC : public ClassA
{
public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
public:
    int d;
};

int main()
{
    ClassD obj;

    // obj.a = 10;                  // Statement 1, Error
    // obj.a = 100;                 // Statement 2, Error

    obj.ClassB::a = 10;  // Statement 3
    obj.ClassC::a = 100; // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << " a from ClassB  : " << obj.ClassB::a;
    cout << "\n a from ClassC  : " << obj.ClassC::a;

    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';
}