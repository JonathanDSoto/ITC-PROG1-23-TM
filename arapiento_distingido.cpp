#include <iostream>
#include <cmath>

using namespace std;

int main() {

     float costo, descuento, total=0;

     cout << "Ingrese el costo del traje a comprar:"<<endl;
     cin >> costo;

    if (costo > 2500){
        descuento = costo * 0.15;
    }else{
        descuento = costo * 0.08;
    }

    cout << "El total del traje es de: $ "<< (costo-descuento)<< endl;
    cout << "El descuento es de: $ " << descuento << endl;

    return 0;
}
