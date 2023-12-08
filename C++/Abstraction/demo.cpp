// Abstraction means displaying only essential information and hiding the details.
// Data abstraction refers to providing only essential information about the data to the outside world,
// hiding the background details or implementation.

// data-abstraction - This type only shows the required information about the data and hides the unnecessary data
// control-abstraction - This type only shows the required information about the implementation and hides unnecessary information

// Abstraction using Classes
// Abstraction in Header files
// Abstraction using Access Specifiers

// Helps the user to avoid writing the low-level code
// Avoids code duplication and increases reusability.
// Can change the internal implementation of the class independently without affecting the user.
// Helps to increase the security of an application or program as only important details are provided to the user.
// It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.

#include <iostream>
using namespace std;

class implementAbstraction
{
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}