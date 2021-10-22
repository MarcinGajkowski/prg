# include <iostream>
# include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

auto ask_user_for_password(std::string prompt) -> int

    
    std::cout << prompt << "int: ";
    auto password = std::string{argv[1]};
    std::getline(std::cin, password);
    return std::stoi(password);

    if (password == student) {
        std::cout << "ok!\n";
    } else {
        do {
            ask_user_for_password("password: ");
        } while (password != student);
        }
    
    return 0;

}
