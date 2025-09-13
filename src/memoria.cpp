#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int variable = 7;
    cout << "Direccion: " << &variable << endl;
    cout << "Valor: " << variable << endl;
    cout << "Indireccion" << *(&variable) << endl;

    void *direccion = malloc(4);
    cout << "valor direccion: " << direccion << endl;
    cout << "tamaño: " << sizeof(direccion) << endl;
    cout << "direccio puntero:" << &direccion << endl;

    int prueba = 64;
    char casteo = (char)prueba; 
    cout<< "Resultado: " << casteo << endl;

    return 0;
}
