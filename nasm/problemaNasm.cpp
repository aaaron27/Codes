#include <iostream>

using namespace std;

extern "C" int f(int a, int b, int x);

int main(){
    int a, b, x;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "\nEl resultado es: " << f(a,b,x);
    return 0;
}
