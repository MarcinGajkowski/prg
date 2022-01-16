#include <iostream>
#include <string>

auto ask_user_for_password() -> void
{
    std::cout << "password: ";
    auto password = std::string{};
    std::getline(std::cin, password);
    if (password == "student")
    {
        std::cout << "ok!\n";
    } 
}
    
auto main(int argc, char* argv[]) -> int
{
    auto const password = std::string{argv[1]};

    if (argc > 1)
    {
    	if (password == "student")
    	{
        	std::cout << "ok!\n";
        	return 0;
    	}  
    	
    	while (password != "student") // nie wiem jak uciąć tą pętlę
    	{
        	do
        	{
            	ask_user_for_password();
        	}
        	while (password != "student");
        	
        	if (password == "student")
    		{
        		std::cout << "ok!\n";
        		break;
    		}
    		break;
        }
        
        return 0; 
    }
    else if (argc == 1)
    {
        std::cout << "No password detected. Please try again.\n";
    }   
}
