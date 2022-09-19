#pragma once

#include <iostream>
#include <vector>

namespace soda {

template <typename T>
concept printable = requires(T a)
{
    std::cout << a;
};

void print_vector(const std::vector<printable auto> vector)
{
    std::size_t count = 0;
    std::cout << "std::vector<" << typeid(vector[0]).name() << ", "
              << vector.size() << ">\n";
    std::cout << "{\n";

    for (const auto& i : vector)
        std::cout << "  " << count++ << ": " << i
                  << (count == vector.size() ? "\n" : ",\n");

    std::cout << "}\n";
}

} // namespace soda
