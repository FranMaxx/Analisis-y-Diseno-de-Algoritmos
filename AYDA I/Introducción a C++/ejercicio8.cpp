#include <iostream>

using namespace std;

void cargarArreglo(int arr[], int longitud)
{
    int aux;

    for (int i = 0; i < longitud; i++)
        cin >> arr[i];
}

void imprimirArreglo(int arr[], int longitud)
{
    for (int i = longitud - 1; i >= 0; i--)
        cout << arr[i] << " ";
}

int main()
{
    int longitud;

    cin >> longitud;
    int arr[longitud];

    cout << "\n";
    cargarArreglo(arr, longitud);
    cout << "\n";
    imprimirArreglo(arr, longitud);

    return 0;
}