#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

void cargarArreglo(int arr[], int longitud)
{
    for (int i = 0; i < longitud; i++)
        cin >> arr[i];
}

void verificarSiEsPrimo(int arr[], int longitud)
{
    for (int i = 0; i < longitud; i++)
        if (esPrimo(arr[i]))
        {
            cout << arr[i] << " es primo." << endl;
        }
        else
        {
            cout << arr[i] << " no es primo." << endl;
        }
}

int main()
{
    int n;
    int longitud;

    cout << "Ingrese la cantidad de valores a verificar: ";
    cin >> longitud;

    int arr[longitud];

    cargarArreglo(arr, longitud);
    cout << "\n";
    verificarSiEsPrimo(arr, longitud);

    return 0;
}