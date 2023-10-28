#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H

#include<iostream>
#include <utility>
#include<string.h>
#include "../Subject/Subject.h"
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string email;
    int age;
    int nrSubjects;
    Subject *subjects;
public:
    Student(string firstName,
            string lastName,
            string email,
            int age,
            int nrSubjects,
            Subject *subjects)
            :firstName(std::move(firstName))
            ,lastName(std::move(lastName))
            ,email(std::move(email))
            ,age(age)
            ,nrSubjects(nrSubjects)
            ,subjects(subjects){};
    ~Student()
    {
        cout << "Student object memory freed for:" << firstName << " " << lastName << endl;
        age = 0;
    }
    Student(Student &t);

    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int getNrSubjects();
    Subject *getSubjects();

    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmail(string newEmail);
    void setAge(int newAge);
    void setNrSubjects(int newNrSubjects);
    void setSubjects(Subject *newSubjects);

    void displayData();
};

#endif //UNTITLED1_STUDENT_H
