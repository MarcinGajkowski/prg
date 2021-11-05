#include <iostream>
#include <string>
#include <random>

std::random_device rd;
std::uniform_int_distribution < int > d100 (1 , 100);

auto const randoe = d100(rd);


auto ask_user_for_guess(std::string prompt) -> int
{
std::cout << prompt << "guess: ";
auto answer = std::string{};
std::getline(std::cin, answer);
return std::stoi(answer);
}

    auto main() -> int
    {
        auto const guess = ask_user_for_guess(" ");
        do
        {
        {
        ask_user_for_guess(" ");
        }
        if (randoe < guess) 
            {
            std::cout << "too big!\n";
            } 
        else if (randoe > guess) 
            {
            std::cout << "too small!\n";
            }
        }
        while (randoe != guess);

        if (randoe == guess)
            {
            std::cout << "just right!\n";
            }
        return 0;
    }

