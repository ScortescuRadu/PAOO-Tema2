#include <iostream>
#include "Student.h"

template<typename... Args>
std::string* stringsToArray(Args... args) {
    std::size_t size = sizeof...(args);
    auto* array = new std::string[size]{std::forward<Args>(args)...};
    return array;
}

int main() {
    //Student Andrei Popescu
    auto* mathProfessors = stringsToArray("Maria", "Bogdan");
    std::vector<int> subjectGrades = { 9, 8 };
    Subject* subjects1 = static_cast<Subject*>(malloc(3 * sizeof(Subject)));

    new (&subjects1[0]) Subject("Math", mathProfessors, subjectGrades);
    new (&subjects1[1]) Subject("Biology", stringsToArray("Cristian", "Maria"), { 9, 8});
    new (&subjects1[2]) Subject("Chemistry", stringsToArray("Alex", "Andrei"), { 9, 10, 10});

    Student s1 = Student("Andrei","Popescu","andrei.popescu@gmail.com",24,3,subjects1);

    //Student Andreea Anghel
    Subject subjects2[] = {
            Subject("Math", stringsToArray("Cristian", "Anghel"), { 10, 9 ,8}),
            Subject("Biology", stringsToArray("Maria", "Andrei"), { 9, 8 }),
            Subject("Chemistry", stringsToArray("Ana", "Elena"), { 10, 10})
    };
    Student s2 = Student("Andreea","Anghel","andrei.popescu@gmail.com",25,3,subjects2);

    //Student Andrei Popescu-Anghel
    Student s3 = Student(s1);
    s3.setLastName("Popescu-Anghel");

    s1.displayData();
    s2.displayData();
    s3.displayData();

    delete[] mathProfessors;
    free(subjects1);
    return 0;
}
