#include "Subject.h"

#include <utility>

Subject::Subject(string  title, string  professor, std::vector<int> grades)
        :title(std::move(title))
        ,professor(std::move(professor))
        ,grades(std::move(grades)) {};
