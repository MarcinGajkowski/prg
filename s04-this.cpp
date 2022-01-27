#include <iostream>

struct ThisLikeThat
{
public:
	int that;
	ThisLikeThat& PrintThis(int that)
	{
		that = that * 5;
		return *this;
		std::cout << "\n";
	}
};

int main()
{
	int yomum = 4;
	ThisLikeThat yope{ 5 };
	yope.PrintThis(yomum);
	std::cout << &yope << "\n";
	return 0;
}
