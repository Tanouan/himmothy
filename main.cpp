#include "Student.h"
#include "Person.h"
#include <iostream>
#include "TeachingAssisant.h"

int main(int argc, char* argv[ ]) {
   Student s = Student(2.9, "Sam");
   s.print();

   Person p = Person("DK");
   p.print();
   std::cout << "Name = " << s.getName() << " GPA = " << s.getGPA() << std::endl;


   // part 2 

   Person *personPtr = &s;
   Student *studentPtr = &s; //the student class is not apart of student

   // part 3
   std::cout << "Part 3" << std::endl;
   personPtr->print();
   studentPtr->print();

   // part 4 
   TeachingAssistant ta1 = TeachingAssistant(3.8, "julie", "OOP");

}
