//
// Created by Usuario on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <vector>
#include "Videojuego.h"

using namespace std;

class Jugador {
private:
    string nickname;
    int ranking;
    vector<Videojuego*> videojuegosInscritos;
public:
    Jugador(string nickname, int nivelRanking);
    void inscribirEnVideojuego(Videojuego* videojuego);
    void mostrar() const;
    string getNickname() const;
};


#endif //JUGADOR_H
