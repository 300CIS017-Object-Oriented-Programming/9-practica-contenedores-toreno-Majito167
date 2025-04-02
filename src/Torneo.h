#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <map>
#include "Jugador.h"
#include "Videojuego.h"

using namespace std;

class Torneo {
private:
    map<string, Jugador*> jugadoresRegistrados;
    map<int, Videojuego*> videojuegosDisponibles;
public:
    void registrarVideojuego(int codigo, string nombre, string genero, int dificultad);
    void registrarJugador(string nickname, int ranking);
    void inscribirJugadorEnVideojuego(string nickname, int codigo);
    void mostrarVideojuegosDeJugador(string nickname);
};

#endif // TORNEO_H

