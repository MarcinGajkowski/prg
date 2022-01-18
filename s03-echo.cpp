#include <iostream>
#include <string>
#include <vector>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 1) 
    {
    	std::cerr << "Za mało argumentów do wyświetlenia. Podaj przynajmniej jeden.\n";
        return 1;
    }

    auto const first = std::string{argv[1]};
    auto const second = std::string{argv[2]};
    	
    if ((first == "-n" && second == "-l") || (first == "-l" && second == "-n"))
    {
    	std::cout << "Nie da się użyć obu tych funkcji naraz.\n";
    }
    else if ((first == "-r" && second == "-l") || (second == "-r" && first == "-l"))
    {
    	for (int rev = argc - 1; rev >= 3; rev--)
    	{
    		std::cout << argv[rev];
    		std::cout << "\n";
    	}
    }
    else if ((first == "-r" && second == "-n") || (second == "-r" && first == "-n"))
    {
    	for (int rev = argc - 1; rev >= 3; rev--)
    	{
    		std::cout << argv[rev];
    		std::cout << " ";
    	}
    }
    else if ((first == "-n" && second != "-l") || (second == "-n" && first != "-l"))
    {
    	for (int nope = 2; nope <= argc; nope++)
    	{
    		std::cout << argv[nope];
    		std::cout << " ";
    	}
    }
    else if ((first == "-l" && second != "-n") || (second == "-l" && first != "-n"))
    {
    	for (int lope = 2; lope <= argc; lope++)
    	{
    		std::cout << argv[lope];
    		std::cout << "\n";
    	}
    }
    else if (first == "-r" || second == "-r")
    {
    	for (int rev = argc - 1; rev >= 2; rev--)
    	{
    		std::cout << argv[rev];
    		std::cout << " ";
    	}
    	std::cout << "\n";
    }  
    else 
    {
    	for (int p = 1; p < argc; p++)
    	{
    		std::cout << argv[p];
    		std::cout << " ";
		}
    	std::cout << "\n";
    }

	return 0;
}

