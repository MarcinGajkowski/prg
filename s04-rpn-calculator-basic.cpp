#include <algorithm>
#include <iostream>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <string>
#include <vector>
#include <cmath>
#include <cstdint>


auto pop_top(std::stack<double>& stack) -> double
{
    if (stack.empty()) 
    {
        throw std::logic_error{"empty stack"};
    }
    auto element = std::move(stack.top());
    stack.pop();
    return element;
}

auto pop_top2(std::stack<int>& stack2) -> int
{
    if (stack2.empty()) 
    {
        throw std::logic_error{"empty stack"};
    }
    auto element = std::move(stack2.top());
    stack2.pop();
    return element;
}

auto addition(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for +"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a + b);
}

auto subtraction(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for -"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a - b);
}

auto multiplication(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for *"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a * b);
}

auto regular_division(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for /"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a / b);
    if (b == 0)
    {
    	std::cout << "Nope!\n";
    	return;
    }
}

auto integer_division(std::stack<int>& stack2) -> int // not enough operands???
{
    if (stack2.size() < 2) 
    {
        throw std::logic_error{"not enough operands for //"};
        return 1;
    }
    else
    {
    	auto const b = pop_top2(stack2);
    	auto const a = pop_top2(stack2);
		stack2.push(a / b);
    	if (b == 0)
    	{
    		std::cout << "Nope!\n";
    		return 1;
    	}
    	
    	return 0;
    }
}

auto modulus(std::stack<int>& stack2) -> int // ALSO not enough operands??????
{
    if (stack2.size() < 2) 
    {
        throw std::logic_error{"not enough operands for %"};
        return 1;
    }
    else 
    {
    	auto const b = pop_top2(stack2);
    	auto const a = pop_top2(stack2);
    	stack2.push(a % b);
    	if (b == 0)
    	{
    		std::cout << "Nope!\n";
    		return 1;
    	}
    	
    	return 0;
    }
}

auto exponentiation(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for **"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(std::pow(a, b));
}

auto square_root(std::stack<double>& stack) -> void
{
    if (stack.size() != 1) 
    {
        throw std::logic_error{"sqrt only needs one operand"};
    }
    auto const a = pop_top(stack);
    stack.push(std::pow(a, 0.5));
}

auto factorial(std::stack<double>& stack) -> void
{
    if (stack.size() != 1) 
    {
        throw std::logic_error{"! only needs one operand"};
    }
    auto const a = pop_top(stack);
    long double facts = 1.0;
    if (a < 0)
    {
    	std::cout << "Factorials of negative numbers don't exist within this realm.\n";
    }
    for (int i = 1; i <= a; ++i)
    {
    	facts *= i;
    }
    stack.push(facts);
}

auto make_args(int argc, char* argv[]) -> std::vector<std::string>
{
    auto args = std::vector<std::string>{};
    std::copy_n(argv, argc, std::back_inserter(args));
    return args;
}

auto main(int argc, char* argv[]) -> int
{
    auto const args = make_args(argc - 1, argv + 1);

    auto stack = std::stack<double>{};
    for (auto const &each : args) 
    {
        try 
        {
            if (each == "p") 
            {
                std::cout << pop_top(stack) << "\n";
            } 
            else if (each == "+") 
            {
                addition(stack);
            } 
            else if (each == "-") 
            {
                subtraction(stack);
            }
            else if (each == "*") 
            {
                multiplication(stack);
            }
            else if (each == "/") 
            {
                regular_division(stack);
            }
            else if (each == "//") 
            {
            	auto stack2 = std::stack<int>{};
                integer_division(stack2);
            }
            else if (each == "%") 
            {
            	auto stack2 = std::stack<int>{};
                modulus(stack2);
            }
            else if (each == "**") 
            {
                exponentiation(stack);
            }
            else if (each == "sqrt") 
            {
                square_root(stack);
            }
            else if (each == "!") 
            {
                factorial(stack);
            }
            else 
            {
                stack.push(std::stod(each));
            }
        } catch (std::logic_error const& e) {
            std::cerr << "error: " << each << ": " << e.what() << "\n";
        }
    }

    return 0;
}
