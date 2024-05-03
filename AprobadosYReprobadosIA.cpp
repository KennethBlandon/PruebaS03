#include <iostream>

int main() {
    int notas[8];
    int aprobados = 0;
    int reprobados = 0;
    int suma = 0;
    float promedio;

    // Ingresar las notas de los estudiantes
    for (int i = 0; i < 8; i++) {
        std::cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        std::cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 60) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // Calcular el promedio general
    promedio = static_cast<float>(suma) / 8;

    // Imprimir los resultados
    std::cout << "Cantidad de alumnos aprobados: " << aprobados << std::endl;
    std::cout << "Cantidad de alumnos reprobados: " << reprobados << std::endl;
    std::cout << "Promedio general del grupo: " << promedio << std::endl;

    return 0;
}