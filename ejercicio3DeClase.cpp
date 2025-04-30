#include <iostream>
using namespace std;

int main()
{
    // PEdir el puntaje
    int stars;
    cout << "hello, please insert your score: " << endl;
    cin >> stars;

    switch (stars)
    {
    case 1: // Para el caso de 1 estrellas
        cout << "Your are very bad, Please stop playing games :( "<<endl;
        cout << "Your score: " << stars << "/5";
        break;
    case 2: // Para el caso de 2 estrellas
        cout << "There we go, it can be improved";
        cout << "Your score: " << stars << "/5";
        break;
    case 3: // Para el caso de 3 estrellas
        cout << "This is better than nothing, but you're getting better."<<endl;
        cout << "Your score: " << stars << "/5";
        break;
    case 4: // Para el caso de 4 estrellas
        cout << "WOW incredible you are very good :)";
        cout << "Your score: " << stars << "/5";
        break;
    case 5: // Para el caso de 5 estrellas
        cout << "AMAZING! maybe you are the better in the all word"<<endl;
        cout << "Your score: " << stars << "/5";
        break;

    default:
        cout << stars << "data incorrect\n";

        break;
    }
    return 0;
}