#include <iostream>
#include <stdio.h>
#include "Person.h"
#include "Employee.h"
#include "Student.h"



int main()
{
	std::cout << "ggg";
	Person person("Anja", "Rubik");

	person.SetBirthDate();
	person.GetBirthDate();

	/*std::cout << "Press \"1\" to Set your date of birth. \n Press \"2\" to print\n";
	int p;
	while (true)
	{
		std::cin >> p;

		if (p == 1)
		{
			person.SetBirthDate();
		}

		else if (p == 2)
		{
			person.GetBirthDate();
		}
		else
		{
			std::cout << "You have pressed the wrong button. Try again.\n";
		}
	}*/

}