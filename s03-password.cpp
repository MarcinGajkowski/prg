# include <iostream>
# include <string>

auto ask_user_for_password(std::string prompt) -> int
{
    std::cout << prompt << "password: ";
    auto password = std::string{};
    std::getline(std::cin, password);
    return 0;
}
    auto main(int argc, char* argv[]) -> int
    {
        if (argc == 0) 
            {
            return 1;
            }

        auto const password = std::string{argv[1]};

        if (password != "student")
            {
               do
                {
                ask_user_for_password(" ");

                if (password == "student")
                   {
                   std::cout << "ok!\n";
                   }
                }
               while (password != "student");

            return 0;
            }
            
        else 
            {
            std::cout << "ok!\n";
            }
    return 0;
    }

