// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::pair<int, int> TwoSum(std::vector<int>& vec, int target)
{
    for (size_t i = 0; i < vec.size(); ++i)
    {
        for (size_t j = i + 1; j < vec.size(); ++j)
        {
            if (vec[i] + vec[j] == target)
                return std::make_pair(static_cast<int>(i), static_cast<int>(j));
        }
    }

    throw std::runtime_error("No match found!");
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count < 2)
            break;

        std::vector<int> vec(count);
        std::cout << "The number array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The sum to find (target): ";
        int target;
        std::cin >> target;

        std::pair<int, int> match = TwoSum(vec, target);
        std::cout << "Result: " << match.first << ", " << match.second << std::endl;
    }
}
