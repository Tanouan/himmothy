#include <string>
#include "Student.h"
#include <iostream>


class TeachingAssistant : public Student {
    private:
        std::string course;
    public:

    TeachingAssistant(float _gpa, std::string name, std::string _course);

    std::string getCourse();
    void print();
};