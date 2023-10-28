#include "Student.h"

Student::Student(Student &t) {
    age=t.age;
    name=t.name;
}

void Student::displayData() {
    cout << name << " " << age << "\n";
}

int Student::getAge() {
    return age;
}

string Student::getName() {
    return name;
}