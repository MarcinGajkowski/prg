# include <iostream>
# include <string>

auto main(int argc, char* argv[]) -> int
{
    auto const n = std::stoi(argv[1]);

    for (auto i = n; i >= 0; i--) 
        {
        if (i > 2)
        {
            std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
            std::cout << "Take one down, pass it around, " << i - 1 << " bottles of beer on the wall...\n";
            std::cout << "\n";
        }

        else if (i == 2)
        {
            std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
            std::cout << "Take one down, pass it around, " << i - 1 << " bottle of beer on the wall...\n";
            std::cout << "\n";
        }

        else if (i == 1)
        {
            std::cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\n";
            std::cout << "Take one down, pass it around, " << i - 1 << " bottles of beer on the wall...\n";
            std::cout << "\n";
            std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            std::cout << "Go to the store and buy some more, " << n << " bottles of beer on the wall.\n";
        }

        }


    if (argc == 0) // nie wiem jak zrobić default do 99 butelek //
    {
        for (auto i = 99; i >= 0; i--) 
            {
            if (i > 2)
            {
                std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
                std::cout << "Take one down, pass it around, " << i - 1 << " bottles of beer on the wall...\n";
                std::cout << "\n";
            }

            else if (i == 2)
            {
            std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
            std::cout << "Take one down, pass it around, " << i - 1 << " bottle of beer on the wall...\n";
            std::cout << "\n";
            }

            else if (i == 1)
            {
                std::cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\n";
                std::cout << "Take one down, pass it around, " << i - 1 << " bottles of beer on the wall...\n";
                std::cout << "\n";
                std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
                std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
            }

            }
    }

    return 0;
}
