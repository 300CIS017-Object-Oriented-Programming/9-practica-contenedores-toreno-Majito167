#include <iostream>
#include "src/Torneo.h"
#include "src/Jugador.h"
#include "src/Videojuego.h"

using namespace std;

int main() {
    Torneo torneo;
    int opcion;
    string nombre, genero, nickname;
    int codigo, dificultad, nivelRanking;

    do {
        cout << "\nMenu Torneo:\n";
        cout << "1. Registrar videojuego\n";
        cout << "2. Registrar jugador\n";
        cout << "3. Inscribir jugador en videojuego\n";
        cout << "4. Mostrar videojuegos de un jugador\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Codigo: ";
                cin >> codigo;
                cin.ignore();
                cout << "Nombre: ";
                getline(cin, nombre);
                cout << "Genero: ";
                getline(cin, genero);
                cout << "Dificultad (1-5): ";
                cin >> dificultad;
                cin.ignore();

                torneo.registrarVideojuego(codigo, nombre, genero, dificultad);
                break;

            case 2:
                cout << "Nickname: ";
                getline(cin, nickname);
                cout << "Nivel de ranking (1-100): ";
                cin >> nivelRanking;
                cin.ignore();

                torneo.registrarJugador(nickname, nivelRanking);
                break;

            case 3:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);

                cout << "Codigo del videojuego: ";
                cin >> codigo;
                cin.ignore();

                torneo.inscribirJugadorEnVideojuego(nickname, codigo);
                break;

            case 4:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);
                torneo.mostrarVideojuegosDeJugador(nickname);
                break;

            case 5:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.