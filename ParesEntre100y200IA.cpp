#include <iostream>

int main() {
    int suma = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    std::cout << "La suma de los números pares comprendidos entre 100 y 200 es: " << suma << std::endl;

    return 0;
}