// SIN TERMINAR

#include <iostream>

using namespace std;

int buscarMayoria(int arr[], int n)
{
    int elem, cant, aux;
}

int main()
{
    int mayoria;

    int arreglo[] = {1, 2, 3, 4, 2, 1, 4, 5, 7, 3, 5, 1, 6, 8, 2, 6};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    mayoria = buscarMayoria(arreglo, n);

    cout << "El elemento mayoria es: " << mayoria;
    return 0;
}