#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y distintas:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminante == 0)
    {
        double x1 = -b / (2 * a);
        cout << "Las raices son reales e iguales:" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        double parte_real = -b / (2 * a);
        double parte_imaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las raices son complejas conjugadas:" << endl;
        cout << "Parte real: " << parte_real << ", Parte imaginaria: " << parte_imaginaria << endl;
    }

    return 0;
}