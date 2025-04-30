#include <iostream>
using namespace std;



int main()
{
    // declaracion de variables para almacenar los numeros y resultado
    float num1, num2, resultado;
    int opcion;
    // solicitar al usuario que ingrese dos numeros
    cout << "Ïngrese el primer numero: ";
    cin >> num1;
    cout << "Ïngrese el segundo numero: ";
    cin >> num2;

    // Mostrar el menu de opciones para elegir la operacion
    cout << "Seleccione una operacion: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Mulitplicacion " << endl;
    cout << "4. Division " << endl;
    cout << "opcion: " << endl;
    cin >> opcion;

    // Usar un switch para realizar la operacion matematica
    switch (opcion)
    {
    case 1:
        resultado = num1 + num2;

            break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
    //Verificar si el segundo numero es cero antes de realizar la division
     if(num2 != 0){
        resultado = num1 / num2;
        cout << "El resultado de la suma es: " << resultado << endl;

     }
     else{
        cout << "DIvision por 0 no es valida" << endl;

     }

    break;

    default:
    cout << "Opcion no valida " << endl;

        break;
    }

    return 0;
}