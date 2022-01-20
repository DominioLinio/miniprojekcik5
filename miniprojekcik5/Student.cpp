#include "Student.h"

Student::Student(int Grades) : Person(Name, Surname)
{

}

Student::~Student()
{
}

void Student::SetGrades()
{
	pair4.first = "english";
	pair4.second = 3;

	std::cout << "Type in grades: ";
	std::cin >> pair0.first >> pair0.second;
	std::cin >> pair1.first >> pair1.second;
	std::cin >> pair2.first >> pair2.second;
	std::cin >> pair3.first >> pair3.second;
}

int Student::GetGrade()
{
	std::cout << pair0.first << " " << pair0.second << std::endl;
	std::cout << pair1.first << " " << pair1.second << std::endl;
	std::cout << pair2.first << " " << pair2.second << std::endl;
	std::cout << pair3.first << " " << pair3.second << std::endl;
	std::cout << pair4.first << " " << pair4.second << std::endl;
	return 0;
}

char Student::GetAllGrades()
{
	return 0;
}

char Student::Introduction()
{
	return 0;
}
