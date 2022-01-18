#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	switch (argc)
	{
    	case 1: 
    	{
			std::cout << "Nic nie ma do FizzBuzzowania :(\n";
        	return 1;
    	}
    	case 2:
    	{
    		auto const o = std::stoi(argv[1]);
    		
    		if (o % 3 == 0) 
        	{
        		std::cout << o << " Fizz\n";
        	
            	if (o % 5 == 0) 
            	{
            		std::cout << o << " FizzBuzz\n";
            	}
        	}
        	else if (o % 5 == 0) 
        	{
        		std::cout << o << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << o << "\n";
        	}
        	break;
    	}
    	case 3:
    	{
    		auto const a = std::stoi(argv[1]);
    		auto const b = std::stoi(argv[2]);
    		
    		if (a % 3 == 0) 
        	{
        		std::cout << a << " Fizz\n";
        
            	if (a % 5 == 0) 
            	{
            		std::cout << a << " FizzBuzz\n";
            	}
        	}
        	else if (a % 5 == 0) 
        	{
        		std::cout << a << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << a << "\n";
        	}
        	
        	if (b % 3 == 0) 
        	{
        		std::cout << b << " Fizz\n";
        
            	if (b % 5 == 0) 
            	{
            		std::cout << b << " FizzBuzz\n";
            	}
        	}
        	else if (b % 5 == 0) 
        	{
        		std::cout << b << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << b << "\n";
        	}
        	break;
    	}
    	case 4:
		{
			auto const a = std::stoi(argv[1]);
    		auto const b = std::stoi(argv[2]);
    		auto const n = std::stoi(argv[3]);
    		
    		if (a % 3 == 0) 
        	{
        		std::cout << a << " Fizz\n";
        
            	if (a % 5 == 0) 
            	{
            		std::cout << a << " FizzBuzz\n";
            	}
        	}
        	else if (a % 5 == 0) 
        	{
        		std::cout << a << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << a << "\n";
        	}
        	
        	if (b % 3 == 0) 
        	{
        		std::cout << b << " Fizz\n";
        
            	if (b % 5 == 0) 
            	{
            		std::cout << b << " FizzBuzz\n";
            	}
        	}
        	else if (b % 5 == 0) 
        	{
        		std::cout << b << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << b << "\n";
        	}
    		
    		for (auto i = 1; i <= n; ++i) 
    		{
        		if (i % 3 == 0) 
        		{
        			std::cout << i << " Fizz\n";
        	
            		if (i % 5 == 0) 
            		{
            		std::cout << i << " FizzBuzz\n";
            		}
        		}
        		else if (i % 5 == 0) 
        		{
        			std::cout << i << " Buzz\n";
        		}
        		else 
        		{
        			std::cout << i << "\n";
        		}
        	}
        	break;
    	}
		case 5:
		{
			auto const a = std::stoi(argv[1]);
    		auto const b = std::stoi(argv[2]);
			auto const f = std::stoi(argv[3]);
			auto const s = std::stoi(argv[4]);
			
			if (a % 3 == 0) 
        	{
        		std::cout << a << " Fizz\n";
        
            	if (a % 5 == 0) 
            	{
            		std::cout << a << " FizzBuzz\n";
            	}
        	}
        	else if (a % 5 == 0) 
        	{
        		std::cout << a << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << a << "\n";
        	}
        	
        	if (b % 3 == 0) 
        	{
        		std::cout << b << " Fizz\n";
        
            	if (b % 5 == 0) 
            	{
            		std::cout << b << " FizzBuzz\n";
            	}
        	}
        	else if (b % 5 == 0) 
        	{
        		std::cout << b << " Buzz\n";
        	}
        	else 
        	{
        		std::cout << b << "\n";
        	}
			
			for (auto i = f; i <= s; ++i)
			{
        		if (i % 3 == 0) 
        		{
        			std::cout << i << " Fizz\n";

            		if (i % 5 == 0) 
            		{
            			std::cout << i << " FizzBuzz\n";
            		}
            	}
        		else if (i % 5 == 0) 
        		{
        			std::cout << i << " Buzz\n";
        		}
        		else 
        		{
        			std::cout << i << "\n";
				}
        	}
        	break;
		}
	}
	
    return 0;
}
