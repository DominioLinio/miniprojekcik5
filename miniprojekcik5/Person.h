#pragma once
#include <iostream>

class Person
{
public:
	Person();
	~Person();

	void SetNameSurname();
	std::string GetNameSurname();
	void SetBirthDate();
	float GetBirthDate();
	void Introduction();

	
	std::string Name;
	std::string Surname;
	int day, month, year;
	
};

