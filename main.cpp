#include <iostream>
#include <string>

constexpr bool isEven(int x) {
    return (x%2 == 0);
}

int main()
{
    std::cout << "Enter a number : ";
    int a{};
    std::cin >> a;
    if (isEven(a)) {
        std::cout << "The number is even";
        return 0;
    }
    std::cout << "The number is odd";
    return 0;

}