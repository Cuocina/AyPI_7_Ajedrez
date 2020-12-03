#include <iostream>
using namespace std;


enum TipoColor { Blanco, Negro };
enum TipoPieza { Caballo, Alfil, Torre, Reina, Rey, Peon };

const int PiezasPorJugador = 16;

// Poner en algun lado responsanbilidades
// 1) Conocer
// 2) Hacer

struct Pieza {
	TipoPieza nombre;
	TipoColor color;
};

struct Jugador {
	TipoColor color;
	Pieza piezasVivas[PiezasPorJugador];
	int cantidadPiezasVivas;
	Pieza piezasMuertas[PiezasPorJugador];
	int cantidadPiezasMuertas;
};


void InicilizarJugador(Jugador &jugador, TipoColor color);

int main() {
	Pieza caballoNegro;
	caballoNegro.nombre = Caballo;
	caballoNegro.color = Negro;

	Jugador jugador1;
	Jugador jugador2;

	return 0;
}

void InicilizarJugador(Jugador &jugador, TipoColor color) {
	jugador.color = color;
	for (int i = 0; i < 8; ++i) {
		jugador.piezasVivas[i].color = color;
		jugador.piezasVivas[i].nombre = Peon;
	}
	// TODO: Agregar alfiles caballos reina rey

	jugador.cantidadPiezasVivas = PiezasPorJugador;
	jugador.cantidadPiezasMuertas = 0;
}

bool SonIguales(Pieza pieza1, Pieza pieza2);


void ComerPieza(Jugador& jugador, Pieza pieza) {
	// 1) Buscar en la vivas esa pieza, eliminarla: Correr el vector para pizar esa posicion y decrementar la cantidad de piezas vivas
	for (int i = 0; i < jugador.cantidadPiezasVivas; ++i) {
		if (SonIguales(jugador.piezasVivas[i], pieza)) {

		}
	}
	// 2) Agregarla en la muertas: Ir a la posicion libre de muertas (cantidadPiezasMuertas) en esa posicion poner la pieza y finalmente incremtentar cantidadPiezasMuertas
}

int ObtenerCantidadPiezasVivas(Jugador& jugador) {
	jugador.piezasVivas

}