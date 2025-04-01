#include "src/Torneo.h"
#include "src/Jugador.h"
#include "src/Videojuego.h"

int main() {
    Torneo torneo;
    int opcion;
    string codigo, nombre, genero, nickname;
    int dificultad, nivelRanking;

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
                cout << "Codigo: "; getline(cin, codigo);
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Genero: "; getline(cin, genero);
            cout << "Dificultad (1-5): "; cin >> dificultad;
            torneo.registrarVideojuego(codigo, nombre, genero, dificultad);
            break;
            case 2:
                cout << "Nickname: "; getline(cin, nickname);
            cout << "Nivel de ranking (1-100): "; cin >> nivelRanking;
            torneo.registrarJugador(nickname, nivelRanking);
            break;
            case 3:
                cout << "Nickname del jugador: "; getline(cin, nickname);
            cout << "Codigo del videojuego: "; getline(cin, codigo);
            torneo.inscribirJugadorEnVideojuego(nickname, codigo);
            break;
            case 4:
                cout << "Nickname del jugador: "; getline(cin, nickname);
            torneo.mostrarVideojuegosDeJugador(nickname);
            break;
        }
    } while (opcion != 5);

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.