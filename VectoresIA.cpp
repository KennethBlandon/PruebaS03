#include <iostream>

using namespace std;

int main() {
    int n; // longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int sumVector[n];

    // Ingresar elementos del vector 1
    cout << "Ingrese elementos del vector 1:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Ingresar elementos del vector 2
    cout << "Ingrese elementos del vector 2:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la suma de los vectores
    for (int i = 0; i < n; i++) {
        sumVector[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado
    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": " << sumVector[i] << endl;
    }

    return 0;
}