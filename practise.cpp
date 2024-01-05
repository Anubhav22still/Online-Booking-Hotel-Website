#include<iostream>

int main()
{
    int a = 10, b = 20;
    std::cout << "a & b are: " << a << " " << b << std::endl;

    a = a - b;
    b = a + b;
    a = b - a;

    std::cout << "a & b are: " << a << " " << b << std::endl;

    std::getchar();
    return 0;
}

