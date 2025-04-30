#include <iostream>
using namespace std;

int main()
{
    int res, n;
    cout << "hola, podrias ingresar un numero entero";
    cin >> n;

    res = n % 2;
    switch (res)
    {
    case 1: // si mi residuo es 1 entonces es impar
        cout << n << "Es un numero impar\n";
        break;
    case 0: // si el caso es que me de 0 entonces es par
        cout << n << "Es un numero par\n";
        break;
    default:
        cout << n << "Datos incorrectos\n";

        break;
    }
    return 0;
}