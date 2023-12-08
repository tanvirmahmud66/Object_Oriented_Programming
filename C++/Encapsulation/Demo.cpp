// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.

// Two Important  property of Encapsulation
// Data Protection:
// Information Hiding:

// Features:
// We can not access any function from the class directly.
// We need an object to access that function that is using the member variables of that class.
// The function which we are making inside the class must use only member variables, only then it is called encapsulation.
// If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation
// Encapsulation improves readability, maintainability, and security by grouping data and methods together
// It helps to control the modification of our data members

// example: ------------------------------------------------------------------------
#include <iostream>
using namespace std;
class temp
{
    int a;
    int b;

public:
    int solve(int input)
    {
        a = input;
        b = a / 2;
        return b;
    }
};

int main()
{
    int n;
    cin >> n;
    temp half;
    int ans = half.solve(n);
    cout << ans << endl;
}

// another example:------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person("John Doe", 30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    person.setName("Jane Doe");
    person.setAge(32);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
