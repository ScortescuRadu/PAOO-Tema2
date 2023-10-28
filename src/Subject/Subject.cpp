#include "Subject.h"

#include <utility>

Subject::Subject(string  title, string  *professors, std::vector<int> grades)
        :title(std::move(title))
        ,professors(professors)
        ,grades(std::move(grades)) {};

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