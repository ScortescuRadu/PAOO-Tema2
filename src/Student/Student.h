#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H

#include<iostream>
#include <utility>
#include<string.h>
#include "Subject/Subject.h"
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string email;
    int age;
    Subject subjects[];
public:
    Student(string firstName,
            string lastName,
            string email,
            int age,
            Subject subjects[])
            :firstName(std::move(firstName))
            ,lastName(std::move(lastName))
            ,email(std::move(email))
            ,age(age)
            ,subjects(subjects){};
    ~Student()
    {
        cout << "after all\n";
        age = 0;
    }
    Student(Student &t);
    void displayData();
    string getFirstName();
    int getAge();
};


#endif //UNTITLED1_STUDENT_H
