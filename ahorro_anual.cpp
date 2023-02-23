#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float sueldo_semana = 0, total_ahorrado = 0;

    cout << "Bienvneido al programa de ahorro" << endl;
    cout << "¿Cuánto gana semanalmente?"<<endl;

    cin >> sueldo_semana;

    total_ahorrado = ((sueldo_semana*4)*12) * 0.15;

    cout << "El ahorro anual será de: $ " << total_ahorrado<<" MXN"<<endl;

    return 0;
}
