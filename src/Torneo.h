#ifndef TORNEO_H
#define TORNEO_H
#include "Jugador.h"
#include <map>
class Torneo {
private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadoresRegistrados;

public:
    void registrarVideojuego(string, string, string, int);
    void registrarJugador(string, int);
    void inscribirJugadorEnVideojuego(string, string);
    void mostrarVideojuegosDeJugador(string);
};
#endif
