// Ejercicio 18: Operaciones con una matriz cuadrada
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 4;

int main() {
    int m[N][N];
    int pares = 0, impares = 0;
    int diagPrincipal = 0, diagSecundaria = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
            if (m[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    cout << "\nMatriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSuma de cada fila:" << endl;
    for (int i = 0; i < N; i++) {
        int suma = 0;
        for (int j = 0; j < N; j++) {
            suma += m[i][j];
        }
        cout << "Fila " << i << ": " << suma << endl;
    }

    cout << "\nSuma de cada columna:" << endl;
    for (int j = 0; j < N; j++) {
        int suma = 0;
        for (int i = 0; i < N; i++) {
            suma += m[i][j];
        }
        cout << "Columna " << j << ": " << suma << endl;
    }

    for (int i = 0; i < N; i++) {
        diagPrincipal += m[i][i];
        diagSecundaria += m[i][N - 1 - i];
    }

    cout << "\nSuma diagonal principal: " << diagPrincipal << endl;
    cout << "Suma diagonal secundaria: " << diagSecundaria << endl;
    cout << "Numeros pares: " << pares << endl;
    cout << "Numeros impares: " << impares << endl;

    system("pause");
    return 0;
}
