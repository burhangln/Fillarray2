#include <array>
#include <ostream>
#include <iomanip>
#include <exception>
#include "FillArray.h"

void fillArray(std::array<std::array<int, maxColumns>, maxRows> & array, size_t rows, size_t columns)
{
	if (rows == 0 || rows > maxRows || columns == 0 || columns > maxColumns)
		throw std::invalid_argument("Invalid array size.");
	int value = 1;
	for (size_t row = 0; row < rows; ++row)
		for (size_t column = 0; column < columns; ++column)
			array[row][column] = value++;
}

void displayArray(std::ostream& stream, std::array<std::array<int, maxColumns>, maxRows>& array, size_t rows, size_t columns)
{
	for (int row = 0; row < rows; ++row)
	{
		for (int column = 0; column < columns; ++column)
			stream << std::setw(4) << array[row][column];
		stream << std::endl;
	}
}