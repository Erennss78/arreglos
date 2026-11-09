// Ejercicio 21: Inventario de productos
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

void MostrarInventario(int codigos[], int cantidades[], int n) {
    cout << "Codigo\tCantidad" << endl;
    for (int i = 0; i < n; i++) {
        cout << codigos[i] << "\t" << cantidades[i] << endl;
    }
}

int BusquedaSecuencial(int codigos[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (codigos[i] == x) {
            return i;
        }
    }
    return -1;
}

// Al intercambiar un codigo se intercambia tambien su cantidad
void Burbuja(int codigos[], int cantidades[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (codigos[j] > codigos[j + 1]) {
                int aux = codigos[j];
                codigos[j] = codigos[j + 1];
                codigos[j + 1] = aux;

                aux = cantidades[j];
                cantidades[j] = cantidades[j + 1];
                cantidades[j + 1] = aux;
            }
        }
    }
}

int BusquedaBinaria(int codigos[], int n, int x) {
    int inf = 0, sup = n - 1;
    while (inf <= sup) {
        int medio = (inf + sup) / 2;
        if (codigos[medio] == x) {
            return medio;
        } else if (codigos[medio] < x) {
            inf = medio + 1;
        } else {
            sup = medio - 1;
        }
    }
    return -1;
}

void MostrarBusqueda(int codigos[], int cantidades[], int pos, int codigo) {
    if (pos != -1) {
        cout << "Producto " << codigos[pos] << " en la posicion " << pos
             << ", cantidad: " << cantidades[pos] << endl;
    } else {
        cout << "El producto " << codigo << " no existe" << endl;
    }
}

int main() {
    int codigos[MAX], cantidades[MAX];
    int n, codigo;
    do {
        cout << "Cantidad de productos: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Codigo del producto " << i + 1 << ": ";
        cin >> codigos[i];
        cout << "Cantidad disponible: ";
        cin >> cantidades[i];
    }

    cout << "\nInventario:" << endl;
    MostrarInventario(codigos, cantidades, n);

    cout << "\nBusqueda secuencial - codigo: ";
    cin >> codigo;
    MostrarBusqueda(codigos, cantidades, BusquedaSecuencial(codigos, n, codigo), codigo);

    Burbuja(codigos, cantidades, n);
    cout << "\nInventario ordenado por codigo:" << endl;
    MostrarInventario(codigos, cantidades, n);

    cout << "\nBusqueda binaria - codigo: ";
    cin >> codigo;
    MostrarBusqueda(codigos, cantidades, BusquedaBinaria(codigos, n, codigo), codigo);

    int mayor = 0, total = 0;
    for (int i = 0; i < n; i++) {
        if (cantidades[i] > cantidades[mayor]) mayor = i;
        total += cantidades[i];
    }
    cout << "\nProducto con mayor existencia: " << codigos[mayor]
         << " (" << cantidades[mayor] << " unidades)" << endl;
    cout << "Total de unidades disponibles: " << total << endl;

    system("pause");
    return 0;
}
