// Ejercicio 14: Busqueda en numeros ordenados
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;

int BusquedaBinaria(int arr[], int n, int x) {
    int inf = 0, sup = n - 1;
    while (inf <= sup) {
        int medio = (inf + sup) / 2;
        cout << "inf = " << inf << ", sup = " << sup << ", medio = " << medio
             << " (a[medio] = " << arr[medio] << ")" << endl;
        if (arr[medio] == x) {
            return medio;
        } else if (arr[medio] < x) {
            inf = medio + 1;
        } else {
            sup = medio - 1;
        }
    }
    return -1;
}

int main() {
    int a[N];
    int x;

    cout << "Ingrese 10 numeros ordenados de menor a mayor" << endl;
    for (int i = 0; i < N; i++) {
        do {
            cout << "a[" << i << "]: ";
            cin >> a[i];
            if (i > 0 && a[i] < a[i - 1]) {
                cout << "Debe ser mayor o igual a " << a[i - 1] << endl;
            }
        } while (i > 0 && a[i] < a[i - 1]);
    }

    cout << "Numero a buscar: ";
    cin >> x;

    int pos = BusquedaBinaria(a, N, x);
    if (pos != -1) {
        cout << "Encontrado en la posicion " << pos << endl;
    } else {
        cout << "No se encontro el numero " << x << endl;
    }

    system("pause");
    return 0;
}
