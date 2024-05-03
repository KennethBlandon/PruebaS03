#include <iostream>

long long sum_of_squares(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int n = 100;
    std::cout << sum_of_squares(n) << std::endl;
    return 0;
}