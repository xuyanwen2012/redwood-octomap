#include <Eigen/Dense>
#include <iostream>

#include "Utils.hpp"

int main()
{
	const int arraySize = 100;

	using ArrayType = Eigen::Matrix<float, 4, arraySize>;

	ArrayType array;

	array.setRandom();

	// Print the array
	std::cout << "Array:\n" << array << std::endl;

	// Calculate the memory consumption
	size_t memorySize = sizeof(array);

	// Print the memory consumption
	std::cout << "Memory consumed by the array: " << memorySize << " bytes"
		<< std::endl;

	TimeTask("Hello", [&]()
	{
	});

	return EXIT_SUCCESS;
}
