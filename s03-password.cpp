#include <iostream>
#include <string>

auto main() -> int
{ 
    while (true)
    {
    	auto password = std::string{};
	
    	std::cout << "password: ";
    	std::getline(std::cin, password);
    	
    	if (password == "student")
    	{
		std::cout << "ok!\n";
    		break;
    	}
    }
    
	return 0;
}
