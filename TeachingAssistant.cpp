#include <string>
#include "Student.h"
#include <iostream>
#include "TeachingAssisant.h"


TeachingAssistant::TeachingAssistant(float _gpa, std::string name, std::string _course): Student(_gpa,name) {
    course = _course;
}

std::string TeachingAssistant::getCourse(){
    return course;
}