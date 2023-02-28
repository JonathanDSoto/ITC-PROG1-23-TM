#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int km,tiempo, dia, total = 0;

    cout << "¿Cuántos kilómetros viajará?" << endl;

    cin >> km;

    cout << "¿Cuánto tarda en recorrer un kilometro? (minutos)" << endl;
    cin >> tiempo;

    cout << "¿Qué día viajará ?"<< endl;
    cout << "1.- lunes, 2.- martes, 3.- miercoles..."<< endl;
    cin >> dia;

    total = tiempo * km;

    if(dia == 1 or dia == 3 or dia == 7){
        cout << "- Su viaje tardará "<< total << " minutos y puede tener un retraso de "<<total*0.15<<" minutos por el tráfico"<< endl;
    }else{
        cout << "- Su viaje tardará "<< total << " minutos "<< endl;
    }


    return 0;
}
