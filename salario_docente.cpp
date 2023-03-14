#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float pago_anual = 18000;
    float incremento = 0;

    for (int i=1; i<7; i++){
        cout << "El salario del año "<<i<<" es de:" << endl;
        cout << pago_anual << endl;

        incremento = pago_anual*0.10;
        pago_anual = pago_anual+incremento;
    }

    cout << " El salario pasando los 6 años es de: "<< pago_anual/12 << endl;
    return 0;
}
