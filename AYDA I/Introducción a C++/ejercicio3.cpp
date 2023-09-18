#include <iostream>
#include <string>

using namespace std;

void leerCadenas(string &str1, string &str2)
{
    cout << "Ingrese su primer cadena..."
         << "\n";
    cin >> str1;

    cout << "\n"
         << "Ingrese su segunda cadena..."
         << "\n";
    cin >> str2;
}

int main()
{
    string str1, str2;

    leerCadenas(str1, str2);

    cout << "\n"
         << "La cadena resultante es: " << str1 + str2;
    return 0;
}