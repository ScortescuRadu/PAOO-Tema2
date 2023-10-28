#include <iostream>
#include "Student.h"

int main() {
    Student s1("Ana",25);
    s1.displayData();
    Student s2(s1);
    s2.displayData();
    return 0;
}
