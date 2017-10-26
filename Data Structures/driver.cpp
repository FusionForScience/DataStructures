#include <iostream>

#include "LinkedList.h"

#define STOP_CONSOLE int dummy; std::cin >> dummy;


int main()
{
	LinkedList<int> numbers;

	numbers.push(1);
	numbers.push(2);

	std::cout << numbers[1] << std::endl;

	STOP_CONSOLE

	return 0;
}