#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) 
    {
        return 1;
    }

    auto const n = std::stoi(argv[1]);
    for (auto i = 1; i <= n; ++i) 
    {
        if (i % 3 == 0) 
        {
        	std::cout << i << " Fizz\n";
        	
            if (i % 5 == 0) 
            {
            	std::cout << i << " FizzBuzz\n";
            }
        }
        else if (i % 5 == 0) 
        {
        	std::cout << i << " Buzz\n";
        }
        else 
        {
        	std::cout << i << "\n";
        }
        
    }
    
    return 0;
}
