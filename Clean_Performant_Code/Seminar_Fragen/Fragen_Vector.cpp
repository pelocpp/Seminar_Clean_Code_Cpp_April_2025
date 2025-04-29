
#include <iostream>
#include <string>
#include <print>
#include <vector>

void test_vector()
{
	std::vector<int> numbers;

	numbers.reserve(1000);

	for (int i = 0; i < 100; ++i)
	{
		numbers.push_back(i);

		std::println("Size: {} - Cap: {}", numbers.size(), numbers.capacity());
	}

	numbers.shrink_to_fit();

	std::println("Size: {} - Cap: {}", numbers.size(), numbers.capacity());
}