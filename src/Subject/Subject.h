#ifndef PAOO_TEMA2_SUBJECT_H
#define PAOO_TEMA2_SUBJECT_H

#include<iostream>
#include <utility>
#include<string.h>
using namespace std;

class Subject {
private:
    string title;
    string *professors{};
    std::vector<int> grades;
public:
    Subject(string  title,
            string  *professors,
            std::vector<int> grades);
    Subject(const Subject& t);
    Subject()=default;
    ~Subject()
    {
        delete[] professors;
        // vector destruction is handled automatically
        cout << "Subject object memory freed for:" << title << endl;
    }
    void printInfo();
};

#endif //PAOO_TEMA2_SUBJECT_H
