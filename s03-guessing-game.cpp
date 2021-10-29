#include <iostream>
#include <string>
#include <random>

std::random_device rd;
std::uniform_int_distribution < int > d100 (1 , 100);

auto const randoe = d100(rd);

auto main(int argc, char* argv[]) -> int
    {
        auto ask_user_for_guess(std::stoi prompt) -> int
            {
            std::cout << prompt << "guess: ";
            auto password = std::stoi(argv[1]);
            std::getline(std::cin, guess);
            return 0;
            }

        do
        {
        if (randoe > guess) 
            {
            std::cout << "too big!\n";
            }
        else if (randoe < guess) 
            {
            std::cout << "too small!\n";
            }
        }
        while (randoe != guess);
    }
