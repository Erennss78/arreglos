// Ejercicio 6: Invertir un arreglo
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 8;

int main() {
    int a[N];
    int pares = 0, impares = 0;

    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
        if (a[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Orden de ingreso: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Orden inverso: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    system("pause");
    return 0;
}
