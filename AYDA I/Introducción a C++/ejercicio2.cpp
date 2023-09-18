#include <iostream>

using namespace std;

void ingresarDatos(int &a, int &b)
{
    cout << "Ingrese el primer numero por favor..."
         << "\n";
    cin >> a;

    cout << "\n"
         << "Ingrese el segundo numero por favor..."
         << "\n";
    cin >> b;
}
int main()
{
    int a, b;

    ingresarDatos(a, b);

    cout << "\n"
         << "El resultado de " << a << " * " << b << " es " << a * b;

    return 0;
}