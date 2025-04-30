/*Tarea:
Tendra que salir este fin de semana, a un lugar recreativo, a un museo, un parque, un cine, a hacer ejercicio, cualquiera cosa de esas
todo lo que hice desde salir de la casa e ir al lugar programarlo con if else, y switch
comentado, en ingles, subido a un repo con formato
*/

/*
ejercicio 1
ejercicio conversion de monedas con vertir de dolar a 3 monedas distinta
ekercicio 12 pide el puntaje dde un jugador de 1/5 estrellas y muestre un mensaje acorde asu desempelo

*/

#include <iostream>
using namespace std;

int main()
{
    // Ejercicio 1
    // Pedir el numero al usuario
    int number;
    cout << "Please enter a number to 1 to 7: ";
    cin >> number;

    switch (number)
    {
        // Segun El numero imprimira el numero de la semana que es

    case 1:
        cout << "Is monday" << endl;
        break;
    case 2:
        cout << "Is tuesday" << endl;
        break;
    case 3:
        cout << "Is wenesday" << endl;
        break;
    case 4:
        cout << "Is thursdat" << endl;
        break;
    case 5:
        cout << "Is friday" << endl;
        break;
    case 6:
        cout << "Is saturday" << endl;
        break;
    case 7:
        cout << "Is sonday" << endl;
        break;

    default:
        cout << "The data is incorrect" << endl;
        break;
    }

    return 0;
}