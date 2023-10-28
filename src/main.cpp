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
    Subject subjects1[] = {
            Subject("Math", stringsToArray("Maria", "Bogdan"), {9, 8}),
            Subject("Biology", stringsToArray("Cristian", "Maria"), {9, 8}),
            Subject("Chemistry", stringsToArray("Alex", "Andrei"), {9, 10, 10})
    };
    Student s1 = Student("Andrei","Popescu","andrei.popescu@gmail.com",24,3,subjects1);

    //Student Andreea Anghel
    Subject subjects2[] = {
            Subject("Math", stringsToArray("Cristian", "Anghel"), {10, 9 ,8}),
            Subject("Sport", stringsToArray("Maria", "Andrei"), {9, 8 }),
            Subject("Chess", stringsToArray("Ana", "Elena"), {10, 10})
    };
    Student s2 = Student("Andreea","Anghel","andrei.popescu@gmail.com",25,3,subjects2);

    //Student Andrei Popescu-Anghel
    Student s3 = Student(s1);
    s3.setLastName("Popescu-Anghel");

    Student s4 = s1; // shallow copy
    s4.setLastName("Popescu-Anghel-Marian");
    s1.setAge(30);

    s1.displayData(); // age 30
    s2.displayData();
    s3.displayData();
    s4.displayData(); // age 30 due to shallow copy

    Student s5 = std::move(s1);
    //s1.displayData();
    s5.displayData();

    cout << "Automatic call of destructors" << endl << endl;
    // Andreea Anghel will have the subjects memory freed by the Destructor of the Subject class.
    return 0;
}
