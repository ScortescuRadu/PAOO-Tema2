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
    Subject *subjects{};
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
            ,subjects(subjects){
        cout << "Student constructor called" << endl;
    };
    Student(Student&& other) noexcept
            : firstName(std::move(other.firstName)),
              lastName(std::move(other.lastName)),
              email(std::move(other.email)),
              age(other.age),
              nrSubjects(other.nrSubjects),
              subjects(other.subjects) {
        cout << "Student move constructor called" << endl;
        // Invalidate the resources in the source object
        other.subjects = nullptr;
        other.nrSubjects = 0;
    }

//    Student(string firstName, string lastName, string email, int age, int nrSubjects, Subject* sourceSubjects)
//            : firstName(std::move(firstName))
//              ,lastName(std::move(lastName))
//              ,email(std::move(email))
//              ,age(age)
//              ,nrSubjects(nrSubjects) {
//        // Allocate memory and deep copy the subjects array
//        subjects = new Subject[nrSubjects];
//        for (int i = 0; i < nrSubjects; i++) {
//            subjects[i] = Subject(sourceSubjects[i]);
//        }
//    }

    Student(Student &t){
        cout << "Student copy constructor called" << endl;
        age=t.age;
        firstName=t.firstName;
        lastName=t.lastName;
        email=t.email;
        nrSubjects=t.nrSubjects;
        subjects=t.subjects;
    };

    ~Student()
    {
        // only subjects require free of memory, but we will let the Destructor of Subject take care of this operation
        cout << "Student object memory freed for:" << firstName << " " << lastName << endl << endl;
    }

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
