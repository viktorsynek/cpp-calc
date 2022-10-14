// Beginner Calculator in C++
#include <iostream>

int sum(int a, int b)
{
    return a + b;
}
int diff(int a, int b)
{
    return a - b;
}
int mult(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    std::string op;

    std::cout << "Give me a number (x): ";
    std::cin >> num1;    
    std::cout << "Give me another one (y): ";
    std::cin >> num2;
    std::cout << "Give me an operator you wanna work with (+, -, *, /): ";
    std::cin >> op;

    if(op == "+"){
        std::cout << "x = " << num1 << ", y = " << num2 << std::endl;
        std::cout << "z = " << sum(num1, num2) << std::endl;
    }
    else if(op == "-"){
        std::cout << "x = " << num1 << ", y = " << num2 << std::endl;
        std::cout << "z = " << diff(num1, num2) << std::endl;
    }
    else if(op == "*"){
        std::cout << "x = " << num1 << ", y = " << num2 << std::endl;
        std::cout << "z = " << mult(num1, num2) << std::endl;
    }
    else if(op == "/"){
        std::cout << "x = " << num1 << ", y = " << num2 << std::endl;
        std::cout << "z = " << division(num1, num2) << std::endl;
    }
    else {
        std::cout << "Invalid operator" << std::endl;
    }

    return 0;
}
