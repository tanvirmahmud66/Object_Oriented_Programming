#include <iostream>
using namespace std;

// Constructor is a member function of a class, whose name is same as the class name.
// Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
// Constructor do not return value, hence they do not have a return type.
// Constructor can be defined inside the class declaration or outside
// Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
// Constructors can be overloaded.
// Constructor can not be declared virtual.
// Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
// Constructor cannot be inherited.
// Addresses of Constructor cannot be referred.
// have more than one constructor in a class (constructor overloading)
// Default constructor
// Parameterized constructor
// Overloaded constructor
// Constructor with default value
// Copy constructor
// Inline constructor

// A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor.
// Destructor has the same name as their class name preceded by a tilde (~) symbol.
// It is not possible to define more than one destructor.
// The destructor is only one way to destroy the object created by the constructor.
// destructor can-not be overloaded.
// Destructor neither requires any argument nor returns any value.
// It is automatically called when an object goes out of scope.
// Destructor release memory space occupied by the objects created by the constructor.
// In destructor, objects are destroyed in the reverse of an object creation.
// It cannot be declared static or const.
// An object of a class with a Destructor cannot become a member of the union.
// The programmer cannot access the address of the destructor.

class Person
{
    string name;
    int age;

    int a;
    int b;

public:
    // constructor (default constructor)
    Person()
    {
        name = "Tanvir Mahmud";
        age = 26;
    }

    // parameterize constuctor
    Person(int x, int y)
    {
        a = x;
        b = y;
    }

    ~Person()
    {
        cout << "Destructor are called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void number()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

//------------------------- constructor and method outside the class
class Student
{
    string name;
    int roll;

public:
    Student();
    void display();

    ~Student()
    {
        cout << "Another Destructor are called" << endl;
    }
};

Student::Student()
{
    name = "Tanvir Mahmud Fahim";
    roll = 1;
}
void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
}

int main()
{
    Person obj;
    obj.display();

    Person obj2(5, 6);
    obj2.number();

    Student s1;
    s1.display();

    return 0;
}