#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char* argv[])
{
	const int numberOfTerms = 40;

	double numerator = 1;
	double denominator = 3;
	double accumulator = 1;

	for(int i = 1 ; i < numberOfTerms; i++)
	{
		accumulator += numerator / denominator;
		numerator *= i + 1;
		denominator *= 2*(i+1) + 1;		
	}	

	double piValue = 2*accumulator;

	std::cout << "Calculated value: " << std::fixed << std::setprecision(15) << piValue; 
	std::cout << " with " << numberOfTerms << " iterations." << std::endl;
	std::cout << "Correct value   : " << M_PI << std::endl;
	return 0;
}

/*
 * Use the fact that 4*arctan(1) = PI and the Taylor Series of arctan(1).
 */
