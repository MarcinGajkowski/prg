#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) 
        {
        return 1;
        }

    auto args = std::vector<std::string>{};
    std::copy_n(argv, argc, std::back_inserter(args));
        for (auto const& each : args) 
        {
        std::cout << each << " ";
        }

return 0;
}
