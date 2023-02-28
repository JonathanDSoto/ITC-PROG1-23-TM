#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float km=0, costo = 0, total = 0;

    cout << "Bienvenido a la curva loca" << endl;

    cout << "¿Cuántos kilómetros desea viajar?" << endl;
    cin >> km;

    cout << " Ingrese el costo del kilometro" << endl;
    cin >> costo;

    if (km < 50){
        costo += costo*0.15;
        cout << "Se aplicará aumento del 15% a su monto" << endl;
    }else{
        cout << " No se aplicará aumento" << endl;
    }

    if(km > 100){
        costo -= costo*0.20;
        cout << "Se aplicará descuento del 20%" << endl;
    }

    total = costo * km;

    cout << "El total es de: $ "<< total<< endl;

    return 0;
}
