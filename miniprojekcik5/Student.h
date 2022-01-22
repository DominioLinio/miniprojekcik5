#pragma once
#include <iostream>	
#include "Person.h"
#include <vector>
#include <stdio.h>
#include <map>

class Student : public Person
{
public:
	Student();
	~Student();

	void SetGrades();
	int GetGrade(std::string subject);
	std::map<std::string, int> GetAllGrades();
	void Introduction();

	std::map<std::string, int> grades; 
	
};

