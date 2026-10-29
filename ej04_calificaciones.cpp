// Ejercicio 4: Calificaciones de estudiantes
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;

void LeerNotas(double notas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }
}

void MostrarNotas(double notas[], int n) {
    cout << "Notas: ";
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

int main() {
    double notas[N];
    double umbral;

    LeerNotas(notas, N);
    cout << "Ingrese la nota minima para aprobar: ";
    cin >> umbral;

    double mayor = notas[0], menor = notas[0];
    int aprobados = 0, reprobados = 0;
    for (int i = 0; i < N; i++) {
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] >= umbral) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    MostrarNotas(notas, N);
    cout << "Promedio general: " << Promedio(notas, N) << endl;
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;
    cout << "Aprueban: " << aprobados << endl;
    cout << "Reprueban: " << reprobados << endl;

    system("pause");
    return 0;
}
