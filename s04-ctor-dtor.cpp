#include <iostream>
#include <string>

struct YoMama
{
public:
	std::string sofat;
	
	YoMama(std::string sofat)
	{
		std::cout << "Yo Mama so \n";
		std::cout << sofat;
	}
	
	~YoMama()
	{
		std::cout << sofat;
		std::cout << " DESTRUCTION!\n"; 
	}
};

int main()
{
	YoMama insult { "stupid" };
	
	return 0;
}
