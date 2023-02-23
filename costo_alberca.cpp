#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float metros_cubicos, dia, costo_metro, total;

    cout << "Bienvenido al programa de CONAGUA" << endl;

    cout << "¿Cuántos metros cúbicos requiere?"<< endl;
    cin >> metros_cubicos;

    cout << "¿Qué día de la semana será la carga?" << endl;
    cout << "1 para lunes, 2 para martes ....." << endl;
    cin >> dia;

    cout << "Ingrese el costo del metro cúbico" << endl;
    cin >> costo_metro;

    total = metros_cubicos * costo_metro;

    if (dia == 6 or dia == 7){

        total += total*0.10;
        total += 200;
    }

    cout << "El total es: $ " << total << endl;
    return 0;
}
