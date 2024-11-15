#include <iostream>
using namespace std;

class Base {
public:
    int square(int num) {
        return num * num;
    }
};

class Derived : public Base {
public:
    int cube(int num) {
        return num * num * num;
    }
};

int main() {
    int num1, num2;

    cout << "Enter the number for square: ";
    cin >> num1;

    cout << "Enter the number for cube: ";
    cin >> num2;

    Derived obj;

    cout << "Square = " << obj.square(num1) << endl;
    cout << "Cube = " << obj.cube(num2) << endl;

    return 0;
}