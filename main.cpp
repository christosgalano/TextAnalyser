#include "TextAnalyser.hpp"
#include <iostream>

int main() {
    TextAnalyser a {"test.txt"};

    std::cout << "Max len : " << a.get_max_length() << std::endl;
    std::cout << "Most used word : " << a.get_most_used_word() << std::endl;

    std::cout << a.get_no_occurrences("she") << ' ' << a.get_no_occurrences("chris") << '\n';
    std::cout << '\n';

    // std::vector<std::string> vec = a.get_most_used_words(5);
    // for (const auto& s : vec)
        // std::cout << s << '\n';

    // std::cout << '\n';
    // a.print_histogram();
}