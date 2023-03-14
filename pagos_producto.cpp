#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double pago = 10;
    double total = 0;

    for (int i=1; i < 21; i++){
        cout << "Cantidad del pago "<<i<<":"<< endl;
        cout << pago << endl;

        total = total + pago;
        pago = pago*2;
    }

    cout << "El total que pago el cliente: "<< total << endl;
    return 0;
}
