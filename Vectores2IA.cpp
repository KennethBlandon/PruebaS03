#include <iostream>

using namespace std;

int main() {
    int n; // longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];

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

    // Calcular el producto punto
    int productoPunto = 0;
    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    // Mostrar el resultado
    cout << "El producto punto de los vectores es: " << productoPunto << endl;

    return 0;
}