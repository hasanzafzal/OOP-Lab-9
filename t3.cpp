#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Manager : public Employee {
private:
    string title;
    string salary;
public:
    void input() {
        Employee::input();
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter salary: ";
        getline(cin, salary);
    }

    void show() {
        Employee::show();
        cout << "Title: " << title << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Scientist : public Employee {
private:
    int articles_published;
    string salary;
public:
    void input() {
        Employee::input();
        cout << "Enter number of articles published: ";
        cin >> articles_published;
        cin.ignore();
        cout << "Enter salary: ";
        getline(cin, salary);
    }

    void show() {
        Employee::show();
        cout << "Articles published: " << articles_published << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Clerk : public Employee {
private:
    int overtime;
public:
    void input() {
        Employee::input();
        cout << "Enter overtime hours: ";
        cin >> overtime;
        cin.ignore();
    }

    void show() {
        Employee::show();
        cout << "Overtime hours: " << overtime << endl;
    }
};

int main() {
    Manager m1;
    Manager m2;
    Scientist scientist;
    Clerk clerk;

    cout << "Enter first Manager details:\n";
    m1.input();
    cout << "Enter second Manager details:\n";
    m2.input();
    cout << "Enter Scientist details:\n";
    scientist.input();
    cout << "Enter Clerk details:\n";
    clerk.input();

    cout << "\nManager no.1 Details:\n";
    m1.show();
    cout << "\nManager no.2 Details:\n";
    m2.show();
    cout << "\nScientist Details:\n";
    scientist.show();
    cout << "\nClerk Details:\n";
    clerk.show();

    return 0;
}