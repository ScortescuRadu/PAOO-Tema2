#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H

#include<iostream>
#include <utility>
#include<string.h>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string studentName, int studentAge)
    {
        name = std::move(studentName);
        age = studentAge;
    }
    ~Student()
    {
        cout << "after all\n";
        name = "";
        age = 0;
    }
    Student(Student &t);
    void displayData();
    string getName();
    int getAge();
};


#endif //UNTITLED1_STUDENT_H
