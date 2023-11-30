//Este archivo contiene los atributos de la clase Pelicula y que son heredados de Produccion, y su constructor.
#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>

#include "Produccion.h" //Debemos incluir el archivo .h de la clase Produccion para poder acceder a todos sus atributos y métodos

#include <string>
using namespace std;

class Pelicula : public Produccion{//Esta es la sintaxis para declarar que una clase es una herencia, y para que tenga todos los atributos y métodos de la superclase
public:
    // Establecemos el constructor
    Pelicula();
    Pelicula(string titulo, string paisOrigen, string estudio, int anioEstreno, int duracion);
};

//Implementación del constructor
Pelicula:: Pelicula(){
}

Pelicula::Pelicula(string titulo, string paisOrigen, string estudio, int anioEstreno, int duracion)
:Produccion(titulo, paisOrigen, estudio, anioEstreno, duracion){
}

#endif