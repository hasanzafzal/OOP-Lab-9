#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name, address;
public:
    int roll_no;
    void getdata() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Roll Number: ";
        cin >> roll_no;
    }
};

class Marks : public Student {
private:
	int marks[3], total_marks;
	float avg_marks;
public:
    void inputmarks() {
        cout << "Enter marks of subject 1: ";
        cin >> marks[0];

        cout << "Enter marks of subject 2: ";
        cin >> marks[1];

        cout << "Enter marks of subject 3: ";
        cin >> marks[2];

        total_marks = marks[0] + marks[1] + marks[2];
        avg_marks = total_marks / 3;
    }

    void show_details() {
        cout << "Marks in subject 1: " << marks[0] << endl;
        cout << "Marks in subject 2: " << marks[1] << endl;
        cout << "Marks in subject 3: " << marks[2] << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Average Marks: " << avg_marks << endl;
    }
};

int main() {
    Marks student;
    student.getdata();
    student.inputmarks();
    student.show_details();

    return 0;
}