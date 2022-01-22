#pragma once
#include <iostream>
#include "Person.h"
#include <vector>

class Employee : Person
{
public:
	Employee(std::string Name, std::string Surname);
	~Employee();

	void AddSubject();
	void DeleteSubject();
	void IsTeachingTheSubject();
	char Introduction();
	
	std::vector<std::string> GetAddedSubject();
	std::vector<std::string> Subjects;

};

