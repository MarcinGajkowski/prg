# include <iostream>
# include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) 
        {
        return 1;
        }

    auto const n = std::stoi(argv[1]);
    for (auto i = n; i >= 0; --i) 
        {
        std::cout << i << "...\n";
        }
}
