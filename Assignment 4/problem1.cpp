#include <iostream>

#include <cstring>

using namespace std;

class Person {

private:

    char name[50];

    int studentID;

    int age;

public:

    void init(const char* n, int id, int a) {

        strcpy(name, n);

        studentID = id;

        age = a;

    }

    void printStudentInfo() {

        cout << "Name: " << name << endl;

        cout << "Student ID: " << studentID << endl;

        cout << "Age: " << age << endl;

    }

    int getID() {

        return studentID;

    }

    int getAge() {

        return age;

    }

    const char* getName() {

        return name;

    }

};

void personSwap(Person &p1, Person &p2) {

    Person temp = p1;

    p1 = p2;

    p2 = temp;

}