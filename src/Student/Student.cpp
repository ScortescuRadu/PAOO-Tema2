#include "Student.h"

Student::Student(Student &t) {
    age=t.age;
    firstName=t.firstName;
    lastName=t.lastName;
    email=t.email;
    nrSubjects=t.nrSubjects;
    subjects=t.subjects;

    // memcpy(newarray dynArray, sizeof *newArray * arraySize);
}

void Student::displayData() {
    cout << firstName << " " << lastName << "[" << age << "] is enrolled to:" << endl;
    for (int it=0; it < nrSubjects; it++)
        subjects[it].printInfo();
    cout << endl;
}

string Student::getFirstName() {
    return firstName;
}
string Student::getLastName() {
    return lastName;
}
string Student::getEmail() {
    return email;
}
int Student::getAge() {
    return age;
}
int Student::getNrSubjects() {
    return nrSubjects;
}
Subject* Student::getSubjects() {
    return subjects;
}

void Student::setFirstName(std::string newFirstName) {
    firstName = newFirstName;
}
void Student::setLastName(std::string newLastName) {
    lastName = newLastName;
}
void Student::setEmail(std::string newEmail) {
    email = newEmail;
}
void Student::setAge(int newAge) {
    age = newAge;
}
void Student::setNrSubjects(int newNrSubjects) {
    nrSubjects = newNrSubjects;
}
void Student::setSubjects(Subject *newSubjects) {
    subjects = newSubjects;
}