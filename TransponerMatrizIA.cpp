#include <iostream>

using namespace std;

void transponerMatriz(int A[][3], int B[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[j][i] = A[i][j];
        }
    }
}

int main() {
    int A[3][3];
    int B[3][3];

    // Ingresar elementos de la matriz A
    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Transponer matriz
    transponerMatriz(A, B);

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}