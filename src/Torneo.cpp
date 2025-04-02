#include "Torneo.h"

void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int dificultad) {
    if (videojuegosDisponibles.find(codigo) == videojuegosDisponibles.end()) {
        videojuegosDisponibles[codigo] = new Videojuego(codigo, nombre, genero, dificultad);
        cout << "Videojuego registrado: " << nombre << " (codigo: " << codigo << ")\n";
    } else {
        cout << "El codigo " << codigo << " ya está en uso.\n";
    }
}

void Torneo::registrarJugador(string nickname, int ranking) {
    if (jugadoresRegistrados.find(nickname) == jugadoresRegistrados.end()) {
        jugadoresRegistrados[nickname] = new Jugador(nickname, ranking);
        cout << "Jugador registrado: " << nickname << "\n";
    } else {
        cout << "El jugador con nickname " << nickname << " ya está registrado.\n";
    }
}

void Torneo::inscribirJugadorEnVideojuego(string nickname, int codigo) {
    if (jugadoresRegistrados.find(nickname) != jugadoresRegistrados.end() &&
        videojuegosDisponibles.find(codigo) != videojuegosDisponibles.end()) {

        jugadoresRegistrados[nickname]->agregarVideojuego(videojuegosDisponibles[codigo]);
        cout << nickname << " ha sido inscrito en el videojuego con codigo " << codigo << ".\n";
        } else {
            cout << "No se pudo inscribir a " << nickname << ": Verifica que el jugador y el videojuego existen.\n";
        }
}

void Torneo::mostrarVideojuegosDeJugador(string nickname) {
    if (jugadoresRegistrados.find(nickname) != jugadoresRegistrados.end()) {
        jugadoresRegistrados[nickname]->mostrarVideojuegos();
    } else {
        cout << "No se encontro al jugador " << nickname << ".\n";
    }
}
