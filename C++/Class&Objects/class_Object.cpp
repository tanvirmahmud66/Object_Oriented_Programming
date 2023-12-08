#include <iostream>
using namespace std;

class Car
{
    // private data can't be accessable by it's object
    // without any access specifier by default all data and method will be private

private:
    int serial_No;
    int manufacture_No;
    int country_code;

public:
    string name;
    string brand;
    int mileage;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Mileage: " << mileage << endl;
    }
};

class Circle
{
private:
    double radius;

public:
    int CircleArea(double r)
    {
        radius = r;
        return 3.14 * radius * radius;
    }
};

int main()
{
    // ---------------------------Car class
    Car ob1;
    ob1.name = "Ghost ML2";
    ob1.brand = "BMW";
    ob1.mileage = 50;
    ob1.display();

    // ---------------------------Circle class
    Circle ob2;
    cout << "Circle Area: " << ob2.CircleArea(5) << endl;
}