#include "bd.h"

bd::bd(const string nombreArchivo) : nombreArchivo(nombreArchivo) {
    if (nombreArchivo.empty()){
        throw invalid_argument("El nombre del archivo no puede estar vacio");
    }
}

bool bd::conectarABd(){ // abrir el archivo en los modos necesarios

    if (metodo == "UPDATE" || metodo == "DELETE"){
        archivo.open(nombreArchivo, ios::out | ios::in | ios::trunc);
    }
    else if (metodo == "READ" || metodo == "INSERT"){
        archivo.open(nombreArchivo, ios::out | ios::in | ios::app);
    }

    if (archivo.is_open()){
        return true;
    }

    return false;
}

string bd::leer(){

}

string bd::actualizar(int id){

}

string bd::escribir(string query){

}

string bd::eliminar(int id){

}

bd::~bd(){
    archivo.close();
}
