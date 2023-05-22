//
//  main.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

// Clases Base - Video
// Clases Derivadas - Pelicula, Serie
// Clase usada para composición - Episodio

#include <iostream>
#include "Video.hpp"
#include "Episodio.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"
int main() {
    // Declaracion de objetos
    Video viernes;
    Episodio episodio_viernes{"Tigres_Rayados", 132, 100};
    Episodio episodio_sabado{"Tigres_Campeones", 132, 100};
    Pelicula peli;
    Serie serie1;
    int opcion;

    serie1.setNombre("Chihuahua");
    serie1.setDuracion(200);
    serie1.setGenero("Comedia");
    serie1.setCalificacion(9.5);
    serie1.agregaEpisodio(episodio_viernes);
    serie1.agregaEpisodio(episodio_sabado);

    cin >> opcion;

    switch (opcion){
        case 1:
            cout << serie1.getGenero() << endl;
            cout << serie1.getDuracion()<< endl;
            break;
        case 2:
            cout << serie1.getCalificacion()<< endl;
            cout << serie1.getEpisodio(0).str()<< endl;
            cout << serie1.getEpisodio(1).str()<< endl;
            break;
        case 3:
            cout << serie1.str() << endl<< endl;
            break;
        case 4:
            cout << "Video = " << viernes.str() << endl;
            cout << "Episodio = " << episodio_viernes.str() << endl;
            cout << "Pelicula = " << peli.str() << endl;
            break;
        default:
            cout << "incorrecta" ;
    }

    return 0;
}
