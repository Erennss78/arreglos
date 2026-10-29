// Ejercicio 17: Ventas por sucursal y producto
#include <iostream>
#include <cstdlib>
using namespace std;

const int SUC = 4;
const int PROD = 5;

int main() {
    double ventas[SUC][PROD];
    double totalSucursal[SUC];
    double totalGeneral = 0;

    for (int i = 0; i < SUC; i++) {
        for (int j = 0; j < PROD; j++) {
            cout << "Sucursal " << i + 1 << ", producto " << j + 1 << ": ";
            cin >> ventas[i][j];
        }
    }

    cout << "\nTotal por sucursal:" << endl;
    int mayor = 0;
    for (int i = 0; i < SUC; i++) {
        totalSucursal[i] = 0;
        for (int j = 0; j < PROD; j++) {
            totalSucursal[i] += ventas[i][j];
        }
        totalGeneral += totalSucursal[i];
        cout << "Sucursal " << i + 1 << ": " << totalSucursal[i] << endl;
        if (totalSucursal[i] > totalSucursal[mayor]) mayor = i;
    }

    cout << "\nTotal por producto:" << endl;
    for (int j = 0; j < PROD; j++) {
        double suma = 0;
        for (int i = 0; i < SUC; i++) {
            suma += ventas[i][j];
        }
        cout << "Producto " << j + 1 << ": " << suma << endl;
    }

    cout << "\nTotal general: " << totalGeneral << endl;
    cout << "Sucursal con mayores ventas: " << mayor + 1
         << " (" << totalSucursal[mayor] << ")" << endl;

    system("pause");
    return 0;
}
