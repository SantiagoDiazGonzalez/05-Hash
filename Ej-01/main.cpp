#include <iostream>
#include "../HashMap/HashMap.h"
using namespace std;

unsigned int hashfuncion(int n){
    return (n*n)%13;
};

HashMap<int, int> tabla(13, hashfuncion);

int main() {
    std::cout << "Ejercicio 05/01\n" << std::endl;

    int ope, valor, clave, salir = 0;

    do {
        cout << "ingrese operacion a realizar" << endl;
        cout << "1)Insertar elemento" << '\n';
        cout << "2)Leer elemento" << '\n';
        cout << "3)Borrar elemento" << '\n';
        cout << "4)Salir" << '\n';
        cin >> ope;

        switch (ope) {
            case 1:
                cout << "Ingrese el valor" << '\n';
                cin >> valor;
                cout << "ingrese la clave" << '\n';
                cin >> clave;
                try {
                    tabla.put(clave, valor);
                }
                catch (int x) {
                    cerr << "La celda esta ocupada" << '\n';
                }
                break;
            case 2:
                cout << "ingrese la clave" << '\n';
                cin >> clave;
                try {
                    cout << tabla.get(clave) << '\n';
                }
                catch (int x) {
                    cerr << "Lacelda esta vacia" << '\n';
                }
            case 3:
                cout << "Ingrese la clave" << '\n';
                cin >> clave;
                try {
                    tabla.remove(clave);
                }
                catch (int x) {
                    cerr << "La celda estaba vacia" << '\n';
                }
                break;
            case 4:
                salir = 1;
                break;
        }
    }while (salir != 1);
    return 0;
}