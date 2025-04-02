#include "Jugador.h"

Jugador::Jugador(string nickname, int ranking) : nickname(nickname), nivelRanking(ranking) {}

void Jugador::agregarVideojuego(Videojuego* videojuego) {
    videojuegos.push_back(videojuego);
    cout << "El jugador " << nickname << " ha sido inscrito en " << videojuego->getNombre() << ".\n";
}

void Jugador::mostrarVideojuegos() const {
    cout << "Videojuegos de " << nickname << ":\n";
    for (const auto& v : videojuegos) {
        cout << "- " << v->getNombre() << "\n";
    }
}

