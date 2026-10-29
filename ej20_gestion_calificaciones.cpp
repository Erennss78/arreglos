// Ejercicio 20: Sistema de gestion de calificaciones
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

void Ingresar(double notas[], int &n) {
    do {
        cout << "Cantidad de calificaciones: ";
        cin >> n;
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> notas[i];
    }
}

void Mostrar(double notas[], int n) {
    cout << "Calificaciones: ";
    for (int i = 0; i < n; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
}

double Promedio(double notas[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

void Burbuja(double notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (notas[j] > notas[j + 1]) {
                double aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }
        }
    }
}

bool EstaOrdenado(double notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (notas[i] > notas[i + 1]) {
            return false;
        }
    }
    return true;
}

int BusquedaSecuencial(double notas[], int n, double x) {
    for (int i = 0; i < n; i++) {
        if (notas[i] == x) {
            return i;
        }
    }
    return -1;
}

int BusquedaBinaria(double notas[], int n, double x) {
    int inf = 0, sup = n - 1;
    while (inf <= sup) {
        int medio = (inf + sup) / 2;
        if (notas[medio] == x) {
            return medio;
        } else if (notas[medio] < x) {
            inf = medio + 1;
        } else {
            sup = medio - 1;
        }
    }
    return -1;
}

void MostrarResultado(int pos) {
    if (pos != -1) {
        cout << "Calificacion encontrada en la posicion " << pos << endl;
    } else {
        cout << "Calificacion no encontrada" << endl;
    }
}

int main() {
    double notas[MAX];
    int n = 0;
    int opcion;
    double x;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ingresar calificaciones" << endl;
        cout << "2. Mostrar arreglo" << endl;
        cout << "3. Calcular promedio" << endl;
        cout << "4. Ordenar (burbuja)" << endl;
        cout << "5. Buscar (secuencial)" << endl;
        cout << "6. Buscar (binaria)" << endl;
        cout << "7. Nota mayor y menor" << endl;
        cout << "8. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (n == 0 && opcion >= 2 && opcion <= 7) {
            cout << "Primero ingrese las calificaciones (opcion 1)" << endl;
            continue;
        }

        switch (opcion) {
            case 1:
                Ingresar(notas, n);
                break;
            case 2:
                Mostrar(notas, n);
                break;
            case 3:
                cout << "Promedio: " << Promedio(notas, n) << endl;
                break;
            case 4:
                Burbuja(notas, n);
                cout << "Arreglo ordenado" << endl;
                Mostrar(notas, n);
                break;
            case 5:
                cout << "Calificacion a buscar: ";
                cin >> x;
                MostrarResultado(BusquedaSecuencial(notas, n, x));
                break;
            case 6:
                if (!EstaOrdenado(notas, n)) {
                    cout << "El arreglo no esta ordenado. Use primero la opcion 4" << endl;
                    break;
                }
                cout << "Calificacion a buscar: ";
                cin >> x;
                MostrarResultado(BusquedaBinaria(notas, n, x));
                break;
            case 7: {
                double mayor = notas[0], menor = notas[0];
                for (int i = 1; i < n; i++) {
                    if (notas[i] > mayor) mayor = notas[i];
                    if (notas[i] < menor) menor = notas[i];
                }
                cout << "Nota mayor: " << mayor << endl;
                cout << "Nota menor: " << menor << endl;
                break;
            }
            case 8:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion != 8);

    system("pause");
    return 0;
}
