#include "Student.h"
#include "Person.h"

Student::Student() : Person()
{
	
}

Student::~Student()
{
}

void Student::SetGrades()
{
	while (true)
	{
		std::cout << "Type in the name of subject: \nType in \"finish\" to close the function.\n";
		std::string subject;
		int grade;
		std::cin >> subject;
		if (subject == "finish")
		{
			break;
		}
		
		while (true) {
			std::cout << "Type in the grade: \n";
			std::cin >> grade;
		
		if (grade > 5 || grade < 1)
			{
				std::cout << "Format of the grade does not meet the requirements. Correct format: 1-5\n";
				continue;
			}break;
		}

		grades[subject] = grade;
	}
}
// sprawdzanie czy student ma wpisan¹ ocenê to do.

int Student::GetGrade(std::string subject)
{
	
	//std::cout << grades[subject] << std::endl;
	return grades.at(subject);
}

std::map<std::string, int> Student::GetAllGrades()
{
	return grades;
}

void Student::Introduction()
{	
	Person::GetNameSurname();
	//Person::GetBirthDate();
	Person::Introduction();
	for (auto pair : GetAllGrades()) {
		std::cout << "Subject: " << pair.first << ", Grade: " << pair.second << std::endl;
	}
}
