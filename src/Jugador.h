#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <vector>
#include "Videojuego.h"

using namespace std;

class Jugador {
private:
    string nickname;
    int nivelRanking;
    vector<Videojuego*> videojuegos;
public:
    Jugador(string nickname, int ranking);
    void agregarVideojuego(Videojuego* videojuego);
    void mostrarVideojuegos() const;
};

#endif // JUGADOR_H

