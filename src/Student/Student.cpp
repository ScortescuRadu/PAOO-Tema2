#include "Student.h"

Student::Student(Student &t) {
    age=t.age;
    firstName=t.firstName;
    lastName=t.lastName;
    email=t.email;
    subjects=t.subjects;
}

void Student::displayData() {
    cout << firstName << " " << lastName << "[" << age << "] is enrolled to:";
    for (Subject it : subjects)
    {

    }
}

int Student::getAge() {
    return age;
}

string Student::getFirstName() {
    return firstName;
}