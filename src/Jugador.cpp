#include "Jugador.h"
Jugador::Jugador(string nickname, int ranking) : nickname(nickname), nivelRanking(ranking) {}
string Jugador::getNickname() { return nickname; }
void Jugador::inscribir(Videojuego* videojuego) { videojuegosInscritos.push_back(videojuego); }
void Jugador::mostrar() { cout << "Jugador: " << nickname << "\n"; }
