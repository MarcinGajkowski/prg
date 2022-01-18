#include <iostream>
#include <string>
#include <ctime>

int randoe;
int guess;

auto main() -> int
{
	srand(time(0));
	randoe = 1 + rand() % 100;
		
	while (true)
	{
		std::cout << "\n";
		std::cout << "guess: ";
		std::cin >> guess;
		
        if (randoe < guess) 
        {
            std::cout << "too big!\n";
        } 
        else if (randoe > guess) 
        {
            std::cout << "too small!\n";
        }
        if (randoe == guess)
        {
            std::cout << "just right!\n";
            break;
        }
	}	
    
    return 0;
}
