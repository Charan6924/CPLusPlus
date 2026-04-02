#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits) {
    bool fourth{bits.test(3)};
    bits <<= 1;
    if (fourth) {
        bits.set(0);
    }
    return bits;
}

int main()
{
    std::bitset<4> bits1{1<<1 };
    std::bitset<4> bits2{0b0000};
    bits2 ^= bits1;
    std::cout << bits2;

    return 0;
}
