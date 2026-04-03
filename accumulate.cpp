#include <iostream>

int accumulate(int a) {
    static int out{0};
    out += a;
    return out;
}