#pragma once
#include <iostream>	
#include "Person.h"
#include <vector>
#include <stdio.h>

class Student : Person
{
public:
	Student(int Grades);
	~Student();

	void SetGrades();
	int GetGrade();
	char GetAllGrades();
	char Introduction();

	int Grades;
	std::string Subject;

	std::vector<std::pair<std::string, int>> array;
	std::pair<std::string, int> pair0;
	std::pair<std::string, int> pair1;
	std::pair<std::string, int> pair2;
	std::pair<std::string, int> pair3;
	std::pair<std::string, int> pair4;
	//std::cout<< para.first << " " << para.second << std::endl;
};

