#pragma once
#include <iostream>	
#include "Person.h"
#include <vector>
#include <stdio.h>

class Student : Person
{
public:
	void SetGrades();
	int GetGrade();
	char GetAllGrades();
	char Introduction();

	int Grades;
	std::string Subject;

	std::vector<std::pair<std::string, int>> array;
	std::pair<std::string, int> para;
	//std::cout<< para.first << " " << para.second << std::endl;
};

