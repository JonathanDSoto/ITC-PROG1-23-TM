#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float r,h,r_1,r_2,result;
    cout << "Obtener el área de la figura" << endl;

    cout << "Ingrese la medida 'R': "<< endl;
    cin >> r;

    cout << "Ingrese la medida 'H': " << endl;
    cin >> h;

    //área de la mitad del circulo
    r_1 = (3.1416 * (r*r)) / 2;
    cout << r_1 << endl;

    r_2 = ((h * (sqrt(3))) / 2);
    r_2 = ((r*2) * r_2 )/ 2;

    cout << r_2 << endl;

    result = r_1 + r_2;
    cout << result;
    return 0;
}
