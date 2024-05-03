#include <iostream>

using namespace std;

void multiplicarMatrices(int A[][3], int B[][3], int C[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];

    // Ingresar elementos de la matriz A
    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Ingresar elementos de la matriz B
    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    // Multiplicar matrices
    multiplicarMatrices(A, B, C);

    // Mostrar la matriz resultante
    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}