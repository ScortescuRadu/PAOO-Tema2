# Create the Student library
add_library(Student STATIC Student.cpp)

# Link Student with the Subject library
target_link_libraries(Student PRIVATE Subject)