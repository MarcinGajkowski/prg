#include <iostream>

struct This
{
    void ThatOne()
    {
        This* that = this;
        std::cout << that << '\n';
    }
};

int main()
{
    This thos;
    thos.ThatOne();
    std::cout << &thos << '\n';
    return 0;
}
