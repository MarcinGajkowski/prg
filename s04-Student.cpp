#include <iostream>
#include <string>
#include "Student.h"

Student stud1 { "Ignacy", "Bignacy", "s24958", 2, 4.5 };
Student stud2 { "Marek", "Blarek", "s26584", 1, 4.23 };
Student stud3 { "Jarosław", "Brosław", "s26844", 3, 4.75 };

auto Student::print_student_details() -> std::string 
{
    std::string studentDetails;
    studentDetails = "Imię: " + name + "\n" +
            		"Nazwisko: " + surname + "\n" +
            		"Indeks studenta: " + indexNumber + "\n" +
            		"Obecnie na semestrze: " + std::to_string(semesterNumber) + "\n" +
            		"Średnia ocen: " + std::to_string(gradeAverage) + "\n";
    return studentDetails;
}

auto main() -> int 
{
	std::cout << stud1.print_student_details() << "\n";
    std::cout << stud2.print_student_details() << "\n";
    std::cout << stud3.print_student_details() << "\n";
    
    return 0;
}
