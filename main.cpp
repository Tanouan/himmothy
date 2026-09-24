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
   Student *studentPtr = &s; //the student class is not a part of student

   // part 3
   std::cout << "Part 3" << std::endl;
   personPtr->print();
   studentPtr->print();

   // part 4 
   TeachingAssistant ta1 = TeachingAssistant(3.8, "julie", "OOP");

   // extra credit
   std::cout << "Part 5" << std::endl;
   Student s2 = Student(3.2, "Alex");
   TeachingAssistant ta2 = TeachingAssistant(3.5, "Mo", "Data Structures");

   Person* people[] = {&s, &ta1, &s2, &ta2};
   int numPeople = sizeof(people) / sizeof(people[0]);

   for (int i = 0; i < numPeople; i++) {
      people[i]->print();
   }

}
