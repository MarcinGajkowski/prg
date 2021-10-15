# include <iostream>
# include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto ask_user_for_password(std::string prompt) -> int
{
    std::cout << prompt << "password: ";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
