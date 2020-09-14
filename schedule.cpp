/*
	Haley Montgomery
	C++ 2020
	Due: Sep 14
	Lab 2.1 Exploring Output
	Lab description This lab is designed to get you familiar out to the command promt using C++. Complete the following problems
*/

#include <iostream>		

int main()
{
    // define two row patterns
    const std::string DAY_1= "Monday   "; 
    const std::string DAY_2= "Tuesday  ";
    const std::string DAY_3= "Wednesday";
    const std::string CLASS_1= "C++";
    const std::string CLASS_2= "Pre Calculus";
    const std::string TIME_2= "8:00";
    const std::string TIME_1= "1:00";
    
    // print rows of checkers board
    std::cout << DAY_1 << "\t\t" << TIME_2 << "\t\t" << CLASS_2 << std::endl;
    std::cout << DAY_1 << "\t\t" << TIME_1 << "\t\t" << CLASS_1 << std::endl;
    std::cout << DAY_2 << "\t\t" << TIME_1 << "\t\t" << CLASS_1 << std::endl;
    std::cout << DAY_3 << "\t\t" << TIME_2 << "\t\t" << CLASS_2 << std::endl;
	// Complete the function by returning the integer 0 to main. This tells is a way
	// of saying that the main function completed with no errors.
	return 0;
}
