#include <iostream>

int readNumber(int x) {
    std::cout << "Please enter a number : ";
    std::cin >> x;
    return x;
}

void writeAnswer2(int x) {
    std::cout << "The sum is : " << x << "\n";
}

int main() {
    int x{};
    readNumber(x);
    x = x + readNumber(x);
    writeAnswer2(x);
    return 0;
}