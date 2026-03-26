#include <iostream>

int getValue() {
    int y{};
    std::cout << "Enter a number : ";
    std::cin >> y;
    return y;
}

int main()
{
    int num{getValue()};
    std::cout << "The number multiplied by 2 is : " << num*2 << "\n";
    return 0;
}