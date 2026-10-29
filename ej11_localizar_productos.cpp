// Ejercicio 11: Localizacion de productos
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 12;

int BusquedaSecuencial(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int codigos[N];
    int codigo;

    for (int i = 0; i < N; i++) {
        cout << "Codigo del producto " << i + 1 << ": ";
        cin >> codigos[i];
    }

    cout << "Ingrese el codigo a buscar: ";
    cin >> codigo;

    int pos = BusquedaSecuencial(codigos, N, codigo);
    if (pos != -1) {
        cout << "El producto existe y esta en la posicion " << pos << endl;
    } else {
        cout << "El producto con codigo " << codigo << " no existe en el registro" << endl;
    }

    system("pause");
    return 0;
}
