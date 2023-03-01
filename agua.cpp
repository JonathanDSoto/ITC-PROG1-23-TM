#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float metros, costo, edad, total = 0;

    cout << " ¿Cuántos metros cúbicos de agua gasto?" << endl;
    cin >> metros;

    cout << "¿Cuál es el costo por metro cúbico?" << endl;
    cin >> costo;

    cout << "¿Cuál es la edad del usuario?" << endl;
    cin >> edad;

    total = metros * costo;
    if (edad>60){

        cout << "El costo que deberá pagar es de: $ "<< total <<" , aplica un descuento por apoyo a la 3ra edad, el total será de: $ "<< (total -= (total*0.30)) <<endl;
    }else{
        cout << " El costo que deberá pagar es de: $ " << total << endl;
    }

    return 0;
}
