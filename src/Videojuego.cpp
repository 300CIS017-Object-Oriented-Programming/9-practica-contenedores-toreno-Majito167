#include "Videojuego.h"

Videojuego::Videojuego(int codigo, string nombre, string genero, int nivelDificultad)
    : codigo(codigo), nombre(nombre), genero(genero), nivelDificultad(nivelDificultad) {}

void Videojuego::mostrar() const {
    cout << "Código: " << codigo << ", Nombre: " << nombre
         << ", Género: " << genero << ", Dificultad: " << nivelDificultad << endl;
}

int Videojuego::getCodigo() const {
    return codigo;
}

string Videojuego::getNombre() const {
    return nombre;
}

