//Este archivo contiene los atributos de la clase Cortometraje, y contiene su constructor.
#ifndef CORTOMETRAJE_H
#define CORTOMETRAJE_H
#include <iostream>

#include "Produccion.h" //Accedemos nuevamente al archivo que contiene los atributos qu queremos que esta clase herede

#include <string>
using namespace std;

class Cortometraje : public Produccion //Clase Cortometraje es una herencia de Produccion
{
public:
    // Este es el constructor de cortometraje
    Cortometraje();
    Cortometraje(string titulo, string paisOrigen, string estudio, int anioEstreno, int duracion);
};

//Implementación del constructor
Cortometraje:: Cortometraje(){
}

Cortometraje::Cortometraje(string titulo, string paisOrigen, string estudio, int anioEstreno, int duracion)
:Produccion(titulo, paisOrigen, estudio, anioEstreno, duracion){
}

#endif