#include <iostream>

int add(int a, int b);

int getValue() {
    int y{};
    std::cout << "Enter a number : ";
    std::cin >> y;
    return y;
}

int main()
{
    std::cout << add(4,5);
    return 0;
}