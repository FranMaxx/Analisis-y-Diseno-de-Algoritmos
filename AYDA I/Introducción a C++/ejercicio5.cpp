#include <iostream>

using namespace std;

void pedirDatos(int &monto, int &plazo)
{
    cout << "Ingrese el monto: $";
    cin >> monto;

    cout << "\n"
         << "Ingrese el plazo: ";
    cin >> plazo;
}

int main()
{
    const double TASA_INTERES = 0.35;
    int monto, plazo;
    double rentabilidad;

    pedirDatos(monto, plazo);

    rentabilidad = monto * (plazo * TASA_INTERES / 365);

    cout << "\n"
         << "La rentabilidad esperada es de: $" << rentabilidad;

    return 0;
}