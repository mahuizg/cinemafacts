//Este archivo contiene los atributos de la clase Serie, y establece los setters y getters de los atributos numTemporadas y numEpisodios, y que son únicos de esta subclase
#ifndef SERIE_H
#define SERIE_H
#include <iostream>

#include "Produccion.h" //Accedemos al archivo que contiene todos los atributos y métodos de la superclase Produccion
#include <string>

using namespace std;

class Serie : public Produccion{ //Sintaxis para establecer la clase Serie como una herencia de la clase Produccion y que hereda su información
private: //Damos los atributos que únicamente forman parte de Serie. Como esta clase no tiene herencias, estos atributos son privados.
    int numTemporadas;
    int numEpisodios;

public:
    // Este es e l constructor que nos permitirá asignar los atributos de cada uno de los objetos de tipo Serie que vamos a crear
    Serie();
    Serie(string titulo, string paisOrigen, string estudio, int anioEstreno, int numTemporadas_, int numEpisodios_);

    // Getters de los atributos propios únicamente de la clase Serie
    int getNumTemporadas();
    int getNumEpisodios();

    // Setters de los atributos de la clase sin implementar
    void setNumTemporadas(int numTemporadas_);
    void setNumEpisodios(int numEpisodios_);
};

//Implementación del constructor
Serie::Serie(){
    numTemporadas = 0;
    numEpisodios = 0;
}

Serie::Serie(string titulo, string paisOrigen, string estudio, int anioEstreno, int numTemporadas_, int numEpisodios_)
: Produccion (titulo, paisOrigen, estudio, anioEstreno, 0){
    numTemporadas = numTemporadas_;
    numEpisodios = numEpisodios_;
}

//Implementación de los getters
int Serie :: getNumTemporadas(){
    return numTemporadas;
}

int Serie:: getNumEpisodios(){
    return numEpisodios;
}

//Implementación de los setters
void Serie::setNumTemporadas(int numTemporadas_){
    numTemporadas = numTemporadas_;
}

void Serie::setNumEpisodios (int numEpisodios_){
    numEpisodios = numEpisodios_;
}
#endif