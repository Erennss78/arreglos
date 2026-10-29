// Ejercicio 9: Tiempos de corredores
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 8;

void Burbuja(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                double aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main() {
    double tiempos[N];

    for (int i = 0; i < N; i++) {
        cout << "Tiempo del corredor " << i + 1 << " (segundos): ";
        cin >> tiempos[i];
    }

    Burbuja(tiempos, N);

    cout << "Tiempos ordenados:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Puesto " << i + 1 << ": " << tiempos[i] << endl;
    }
    cout << "Primer puesto: " << tiempos[0] << endl;
    cout << "Ultimo puesto: " << tiempos[N - 1] << endl;

    system("pause");
    return 0;
}
