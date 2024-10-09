#ifndef BD_H
#define BD_H

#include <iostream>
#include <fstream>

using namespace std;

class bd
{
    private:
        const string nombreArchivo;
        fstream archivo;
        string metodo = "";

        bool conectarABd();

    public:
        bd(const string nombreArchivo);
        string leer();
        string actualizar(int id);
        string escribir(string query);
        string eliminar(int id);
        ~bd();
};

#endif // BD_H
