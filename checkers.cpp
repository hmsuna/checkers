/*
	Haley Montgomery
	C++ 2021
	Due: OCt 15 
	Lab 2.2 Exploring Output
	Lab description This lab is designed to get you familiar out to the command promt using C++. Complete the following problems
*/

#include <iostream>		

int main()
{
    // define two row patterns
    const std::string ROW_A= "     *           *           *           *";
    const std::string ROW_B= "*          *           *           *";
    
    // print rows of checkers board
    std::cout << ROW_A << std::endl;
    std::cout << ROW_B << std::endl;
    std::cout << ROW_A << std::endl;
    std::cout << ROW_B << std::endl;
    std::cout << ROW_A << std::endl;
    std::cout << ROW_B << std::endl;
    std::cout << ROW_A << std::endl;
    std::cout << ROW_B << std::endl;

	// Complete the function by returning the integer 0 to main. This tells is a way
	// of saying that the main function completed with no errors.
	return 0;
}
