#include <iostream>
using namespace std;

// -------------------- class with private data member
class Person
{
private:
    int NID;      // this data member can't be accessable with Person class obj
    int Passport; // this data member can't be accessable with person class obj
public:
    string name; // this data member can be accessable in anywhere with the code
    int age;     // this data member can be accessable in anywhere with the code

    void displayInfo()
    {
        cout << "NID NO. - " << NID << endl;
        cout << "Passport NO. - " << Passport << endl;
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
    }

    // we can set or manipulate private data member using function
    void setPrivateData(int n, int p)
    {
        NID = n;
        Passport = p;
    }
};

// ------------------------------------------- class with protected data member
// ----------base class
class Student
{
protected:
    int student_id; // protected data member can't be accessable with object and out side the class
    // protected data member can be accessable in subclass or in derive class
    // protected data member can be accessable in friend class
};

// ----------sub class or derived class from public base class
class Registration : public Student
{
public:
    void setId(int id)
    {
        student_id = id;
    }
    void display()
    {
        cout << "Student ID: " << student_id << endl;
    }
};

// -------------------------------------------- main function-----------------------------
int main()
{
    // ------------------------ Person Class
    Person p1;
    // p1.NID = 2342424; we can't use NID data member with object because NID data member is private
    // p1.Passport = 23424234; we can't use Passport member with object because Passport data member is private
    p1.name = "Tanvir Mahmud Fahim";
    p1.age = 26;
    p1.setPrivateData(12345678, 87654321);
    p1.displayInfo();

    // ------------------------ Registration class
    Registration r1;
    r1.setId(6607742);
    r1.display();
}