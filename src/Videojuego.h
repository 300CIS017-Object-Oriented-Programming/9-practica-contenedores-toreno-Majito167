#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;

class Videojuego {
private:
    int codigo;
    string nombre;
    string genero;
    int nivelDificultad;
public:
    Videojuego(int codigo, string nombre, string genero, int nivelDificultad);
    void mostrar() const;
    int getCodigo() const;
    string getNombre() const;
};

#endif // VIDEOJUEGO_H

