// Ejercicio 19: Transformaciones de matrices (ejercicio 36 del libro)
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 10;

void LeerMatriz(int m[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void MostrarMatriz(int m[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

// a) La columna j pasa a la posicion n-1-j
void InversionHorizontal(int orig[][MAX], int res[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = orig[i][n - 1 - j];
        }
    }
}

// b) La fila i pasa a la posicion n-1-i
void InversionVertical(int orig[][MAX], int res[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = orig[n - 1 - i][j];
        }
    }
}

// c) Se conserva el triangulo superior y se copia en el inferior
void SimetriaDiagonal(int orig[][MAX], int res[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                res[i][j] = orig[i][j];
            } else {
                res[i][j] = orig[j][i];
            }
        }
    }
}

int main() {
    int a[MAX][MAX], res[MAX][MAX];
    int n;
    do {
        cout << "Ingrese el tamano de la matriz cuadrada (1-" << MAX << "): ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    LeerMatriz(a, n);

    cout << "\nMatriz original:" << endl;
    MostrarMatriz(a, n);

    InversionHorizontal(a, res, n);
    cout << "\na) Inversion horizontal:" << endl;
    MostrarMatriz(res, n);

    InversionVertical(a, res, n);
    cout << "\nb) Inversion vertical:" << endl;
    MostrarMatriz(res, n);

    SimetriaDiagonal(a, res, n);
    cout << "\nc) Simetria respecto de la diagonal principal:" << endl;
    MostrarMatriz(res, n);

    system("pause");
    return 0;
}
