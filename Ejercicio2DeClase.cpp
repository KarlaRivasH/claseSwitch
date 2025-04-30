#include <iostream>
using namespace std;

int main()
{ // Crear variables de numeros y el resultado
    float number, result;
    cout << "hello, please insert the amount of money in dollars" << endl;
    cin >> number;
    // ahora que el usuario decida que conversion desea
    cout << "Now please insert option to convert the money in dollars to another coin" << endl;
    cout << "1. USD TO EUR (euro)" << endl;
    cout << "2. USD TO JPY (yen)" << endl;
    cout << "3. USD TO KRW (won)" << endl;

    int option;
    cin >> option;
    cout << "Cantidad: $" << number << endl;

    switch (option)
    {
        // Si convierte a euros
    case 1:
        result = number * 0.88;
        cout << "La conversion es de: " << result << "Euros" << endl;
        break;
        // Si convierte a yen
    case 2:
        result = number * 142.89;
        cout << "La conversion es de: " << result << "Yens" << endl;
        break;
        // Si convierte a won
    case 3:
        result = number * 1424.59;
        cout << "La conversion es de: " << result << "Won" << endl;
        break;
    default:
        cout << "Datos incorrectos\n";

        break;
    }
    return 0;
}