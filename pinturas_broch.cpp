#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float metros, costo_metro, total ;

    cout << "Bienvenido a PINTURAS BROCHA GORDA" << endl;
    cout << "¿Cuántos metros desea pintar?" << endl;

    cin >> metros;

    if(metros > 4 ){

        cout << "Ingrese el precio del m2"<< endl;
        cin >> costo_metro;

        total = costo_metro*metros;

        if(metros > 40){
            total += total*0.40;
        }

        cout << "El total a pagar es de: $ "<< total <<"" << endl;

    }else{
        cout << "Lo sentimos, solo se realizan trabajos superiores a los 4 m2"<<endl;
    }


    return 0;
}
