#include "Employee.h"


Employee::Employee() : Person()
{

}

Employee::~Employee()
{
}

void Employee::AddSubject()
{
	int x;
	std::cout << "All of the employees are given the limit of subjects -> 4.\n";
	while (true) {
		std::cout << "Give the number of your subjects: \n";
		std::cin >> x;
		if (x + Subjects.size() > 4 || x + Subjects.size() < 1)
		{
			std::cout << "The given number does not meet the requirements. The interval: 1-4.\n";
			continue;
		}break;
	}
	

	for (int i = 0; i < x; i++)
	{
		std::cout << "Type in your subject: \n";
		std::string subject;
		std::cin >> subject;
		if (std::find(Subjects.begin(), Subjects.end(), subject) == Subjects.end())
		{
		Subjects.push_back(subject);
		}
		else
		{
			std::cout << "\n";
			std::cout << "The given subject already exists.\n";
			i--;
		}
	}
	std::cout << "\n";
}
std::vector<std::string> Employee::GetAddedSubject()
{
	return Subjects;
}

void Employee::DeleteSubject()
{
	/*for (int i = 0; i < Subjects.size(); i++)
	{
		std::cout << Subjects[i]<<"\n";
	}*/

	while (true) {
		//std::cout << Subjects.size();
		std::cout << "The following list of subjects: \n";
		for (int i = 0; i < Subjects.size(); i++)
		{
			std::cout << Subjects[i] << "\n";
		}
		std::cout << "\n";
		if (Subjects.size() == 0)
		{
			std::cout << "All the subjects have been erased.\n\n";
			break;
		}
		std::cout << "Type in the subject you want to erase: \n";
		std::string subject;
		std::cin >> subject;
		if (subject == "finish")
		{
			break;
		}

		if (std::find(Subjects.begin(), Subjects.end(), subject) == Subjects.end())
		{
			std::cout << "The subject you are looking for does not exist.\n";
		}
		else
		{
			Subjects.erase(remove(Subjects.begin(), Subjects.end(), subject), Subjects.end());
			std::cout << "\nThe Subject has been erased.\n\n";
		}
			
		
	}

}

void Employee::IsTeachingTheSubject()
{
	while (true) {
		std::cout << "Type in the subject you want for employee to be checked: \n";
		std::string subject;
		std::cin >> subject;
		if (subject == "finish")
		{
			break;
		}
		if (std::find(Subjects.begin(), Subjects.end(), subject) == Subjects.end())
		{
			std::cout << "The employee does not teach that subject.\n";
		}
		else
		{
			std::cout << "The employee is teaching that subject.\n";
		}
		std::cout << "If you want to exit, type \"finish\". \n";
	}
}

void Employee::Introduction()
{
	Person::GetNameSurname();
	Person::GetBirthDate();
	Person::Introduction();
	std::cout << "Subjects teached: \n";
	for (int i = 0; i < Subjects.size(); i++)
	{
		std::cout << Subjects[i] << "\n";
	}

}
