#pragma once
#include <iostream>
#include "Person.h"

class Employee : Person
{
	std::string AddSubject();
	std::string DeleteSubject();
	void IsTeachingTheSubject();
	char Introduction();
	
	std::string subject;
	char Subjects[];

};

