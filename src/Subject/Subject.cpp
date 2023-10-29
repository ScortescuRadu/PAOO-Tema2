#include "Subject.h"

#include <utility>

Subject::Subject(string  title, string  *professors, std::vector<int> grades)
        :title(std::move(title))
        ,professors(professors)
        ,grades(std::move(grades)) {
    cout << "Subject constructor called" << endl;
};

Subject::Subject(const Subject &t) {
    cout << "Subject copy constructor called for " << t.title <<endl;
    title = t.title;

    // Deep copy the professors string
    if (t.professors != nullptr) {
        professors = new string(*(t.professors));
    } else {
        professors = nullptr;
    }

    grades = t.grades;
}

void Subject::printInfo() {
    cout << title << ", with tutor/s: ";
    for (int it = 0; it < 2; it++){
        cout << professors[it];
    }
    cout << ", grades: ";
    for (auto it : grades){
        cout << it << " ";
    }
    cout << endl;
}

void Subject::setTitle(std::string newTitle) {
    title=std::move(newTitle);
}

string Subject::getTitle() {
    return title;
}
