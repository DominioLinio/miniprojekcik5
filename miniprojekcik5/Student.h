#pragma once
#include <iostream>	
#include "Person.h"
#include <vector>
#include <stdio.h>
#include <map>

class Student : Person
{
public:
	Student(std::string Name, std::string Surname);
	~Student();

	void SetGrades();
	int GetGrade(std::string subject);
	std::map<std::string, int> GetAllGrades();
	char Introduction();

	std::map<std::string, int> grades; 
	
};

