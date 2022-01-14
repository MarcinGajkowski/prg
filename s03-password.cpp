# include <iostream>
# include <string>

auto ask_user_for_password(std::string prompt) -> void
{
    std::cout << prompt << "password: ";
    auto password = std::string{};
    std::getline(std::cin, password);
}
    
auto main(int argc, char* argv[]) -> int
{
    auto const password = std::string{argv[1]};

    if (argc > 1)
    {
        do
        {
            ask_user_for_password(" ");
            if (password == "student")
            {
                std::cout << "ok!\n";
                return 0;
            }
        }
        while (password != "student");

        if (password == "student")
        {
            std::cout << "ok!\n";
            return 0;
        }    
    }
    else if (argc == 1)
    {
        std::cout << "No password detected. Please try again.\n";
    } 
            
        return 0;
}
