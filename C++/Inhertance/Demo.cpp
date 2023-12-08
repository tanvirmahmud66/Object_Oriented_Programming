// class  <derived_class_name> : <access-specifier> <base_class_name>

// class ABC : private XYZ  -  private derivative
// class ABC : public XYZ  - public derivative
// class ABC : protected XYZ - protected derivative

// When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class
// the public members of the base class can only be accessed by the member functions of the derived class.
// They are inaccessible to the objects of the derived class.

// On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class.
// Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

//---------------------- If we derive a subclass from a public base class (Public Mode) ----------
// the public member of the base class will become public in the derived class and
// protected members of the base class will become protected in the derived class.
// private member of the base class will remain private and can't access in derived class.

// --------------------- If we derive a subclass from a Protected base class (Protected Mode) ----------
// public members and protected members of the base class will become protected in the derived class.
// private member of the base class will remain private and can't access in derived class.

//---------------------- If we derive a subclass from a Private base class (Private Mode) -----------
// both public members and protected members of the base class will become Private in the derived class.
// private member of the base class will remain private and can't access in derived class.

// The private members in the base class cannot be directly accessed in the derived class,
// while protected members can be directly accessed.

#include <iostream>
using namespace std;

class Person
{
    // by default private member
    int age;    // can't be accessable in derived class bcz of private member
    int salary; // can't be accessable in derived class bca of private member

public:
    int phone;   // can be accessable in derived class as public member in derived class
    string name; // can be accessable in derived class as public member in derived class
};

// ---------------------- Public derivative-----------------------------
class Teacher : public Person // when base class inherited by derive class as public
{

public:
    string institution;

    void display()
    {
        cout << "Name: " << name << endl; // public member base
        // cout << "Age: " << age << endl; -----------not accessable (private member base)
        // cout << "Salary: " << salary << endl; -----not accessable (private member base)
        cout << "Phone: " << phone << endl;             // public member base
        cout << "Institution: " << institution << endl; // public member derive
    }
};

// -------------------------- private derivative------------------------
class Engineer : private Person
{
public:
    string workPlace;

    void display()
    {
        cout << "Name: " << name << endl;
        // cout << "Age: " << age << endl; -----------not accessable
        // cout << "Salary: " << salary << endl; -----not accessable
        cout << "Phone: " << phone << endl;
        cout << "Work Place: " << workPlace << endl;
    }
};

int main()
{
    Teacher t1;
    t1.name = "tanvir Mahmud"; // accessable bcz "name" is public member in base class
    // t1.age = 27; not accessable bcz age is private in base class
    // t1.salary = 234234; not accessable bcz salary is private in base class
    t1.phone = 34343;       // accessable bcz "phone" is public member in base class
    t1.institution = "SUB"; // accessable bcz "institution" is public member in derived class
    t1.display();

    Engineer e1;
    // e1.name = "Tanvir Mahmud"; // not accessable bcz public member become private in derive class as Private derivative
    // e1.age = 27; // not accessable bcz private member of base class remain private in all type of derivative
    // e1.salary = 342424; // not accessable bcz private member of base class remain private in all type of derivative
    // e1.phone = 3424242424;  // not accessable bcz public member become private in derive class as Private derivative
    e1.workPlace = "BrainStation23"; // public member in derive class
    e1.display();
}