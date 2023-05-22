# Clases Base - Video
# Clase composición - Episodio
# Clases Derivadas - Pelicula, Serie (con composicion)

<img alt="points bar" align="right" height="36" src="../../blob/status/.github/activity-icons/points-bar.svg" />


```c++
//
//  main.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#include <iostream>
#include "Video.h"
#include "Episodio.h"
#include "Pelicula.h"
#include "Serie.h"
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
            cout << serie1.getDuracion() << endl;
            break;
        case 2:
            cout << serie1.getCalificacion() << endl;
            cout << serie1.getEpisodio(0).str() << endl;
            cout << serie1.getEpisodio(1).str() << endl;
            break;
        case 3:
            cout << serie1.str() << endl;
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


```
# CASOS DE PRUEBA
```c++
/* Casos de Prueba
//  
Datos de entrada:
1

Datos de salida:
Comedia
200

Datos de entrada:
2

Datos de salida:
9.5
Tigres_Rayados 132 100
Tigres_Campeones 132 100

Datos de entrada:
3

Datos de salida:
0000 Chihuahua 200 Comedia 9.500000 2
Tigres_Rayados 132 100
Tigres_Campeones 132 100

Datos de entrada:
4

Datos de salida:
Video = 0000 TC1030 10 Computación 100.000000
Episodio = Tigres_Rayados 132 100
Pelicula = 0000 TC1030 10 Computación 100.000000 100

```

2. Push your changes back to your assignment GitHub repo. Remember to try to make your commits atomic and your commit messages descriptive.

3. Wait a minute for the tests to run. Refresh the repo page to see if you have completed the exercise successfully.
You should score 100 marks if the test passes.
