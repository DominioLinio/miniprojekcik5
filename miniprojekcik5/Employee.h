#pragma once
#include <iostream>
#include "Person.h"
#include <vector>

class Employee : public Person
{
public:
	Employee();
	~Employee();

	void AddSubject();
	void DeleteSubject();
	void IsTeachingTheSubject();
	void Introduction();
	
	std::vector<std::string> GetAddedSubject();
	std::vector<std::string> Subjects;

};

