#include <iostream>

int main() {
    int i;
    int n;
    int estu = 0;
    float prom;

    estu = 0;
    prom = 0;

    for (i=1;i<=10;i++) {
        std::cout << "Digite la nota del estudiante numero " << i << std::endl;
        std::cin >> n;
        estu = n + estu;
    }

    prom = estu / 10.0;
    std::cout << "El promedio general es: " << prom << std::endl;

    return 0;
}