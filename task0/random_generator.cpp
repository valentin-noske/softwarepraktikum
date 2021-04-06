//
// Created by valentin on 03.04.21.
//
#include "random_generator.h"

std::vector<int> key_numbers(int const& count) {
    std::vector<int> numbers = {};
    for(uint counter = 0; counter < count; ++counter) {
            numbers.push_back(counter);
    }
    std::random_shuffle(numbers.begin(), numbers.end());
    return numbers;
}
std::string get_random_string(){
    std::string output = {};
    int string_length = rand() % 15;
    for(uint index = 0; index < string_length; ++index){
        int rnd_ascii_number = rand() % 128;
        output.push_back(char(rnd_ascii_number));
    }
    return output;
}

std::vector<std::string>key_strings(int const& count) {
    std::vector<std::string> strings = {};
    for(uint counter = 0; counter < count; ++counter) {
        strings.push_back(get_random_string());
    }
    return strings;
}






