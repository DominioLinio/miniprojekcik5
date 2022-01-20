#pragma once
#include <iostream>

class Person
{
public:
	Person(std::string Name, std::string Surname);
	~Person();

	void SetNameSurname();
	std::string GetNameSurname();
	void SetBirthDate();
	float GetBirthDate();
	char Introduction();

	
	std::string Name;
	std::string Surname;
	int day, month, year;
	
};

