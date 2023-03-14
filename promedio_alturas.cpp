#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float total = 0, estatura = 0, promedio;
    int flag = 1, personas = 1;

    while(flag == 1){

        cout << "Ingrese la altura de la persona "<< personas<<":" << endl;
        cin >> estatura;

        total = total + estatura;
        personas++;

        cout << "¿desea continuar? ingrese 1)si, 2)no:"<<endl;
        cin >> flag;
    }

    promedio = total / (personas-1);

    cout << "El promedio es de: " << promedio << endl;

    return 0;
}
