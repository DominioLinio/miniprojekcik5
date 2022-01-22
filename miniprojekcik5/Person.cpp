#include "Person.h"

Person::Person(std::string Name, std::string Surname)
{
	/*SetBirthDate();*/
}

Person::~Person()
{

}

void Person::SetNameSurname()
{
	std::cout << "Give your Name and Surname: \n";
	std::cin >> Name >> Surname; 
}

std::string Person::GetNameSurname()
{
	return Name, Surname;
}

void Person::SetBirthDate()
{
	while (true) {
		std::cout << "Give your date of birth: \n";
		std::cin >> day >> month >> year;
		if (month > 12 || month < 1)
		{
			std::cout << "The date does not meet the requirements. Correct the month.\n";
			continue;
		}
		if (year > 2004 || year < 1800)
		{
			std::cout << "The date does not meet the requirements. Correct the year.\n";
			continue;
		}


		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
		{
			std::cout << "The date does not exist. Correct date for this month is <32\n";
			std::cout << "Give your date of birth again:\n";
			continue;
		}
		if (month == 2 && day > 28)
		{
			std::cout << "The date does not exist. Correct date for this month is <29\n";
			std::cout << "Give your date of birth again: \n";
			continue;
		}
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		{
			std::cout << "The date does not exist. Correct date for this month is <31\n";
			std::cout << "Give your date of birth again: \n";
			continue;
		}break;
	}
}

float Person::GetBirthDate()
{
	std::cout << day << "." << month << "." << year;
	return day, month, year;
}

char Person::Introduction()
{
	std::cout<<"Name: "<<Name<<", Surname: "<<Surname<<", Date of birth: " << day << "." << month << "." << year<<"\n";
	return 0;
}
