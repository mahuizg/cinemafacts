#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <iostream>

#include <string>

using namespace std;

class Director //En esta ocasión, la clase Director no heredará los atributos de Producción
{
private: //Declaramos los atributos de director, y son privados, pues esta clase no tiene herencia 
    string nombreCompleto;
    string paisNacimiento;
    string genero;
    int anioNacimiento;

public:
    Director();
    Director(string nombreCompleto_, string paisNacimiento_, string genero_, int anioNacimiento_);

    // Las siguientes líneas son nuestros getters
    string getNombreCompleto();
    string getPaisNacimiento();
    string getGenero();
    int getAnioNacimiento();

    // Y estos son los setters
    void setNombreCompleto(string nombreCompleto_);
    void setPaisNacimiento(string paisNacimiento_);
    void setGenero(string genero_);
    void setAnioNacimiento(int anioNacimiento_);
};

//Implementación del constructor
Director::Director(){
    nombreCompleto = "";
    paisNacimiento = "";
    genero = "";
    anioNacimiento = 0;
}

//Implementación del constructor Produccion
Director::Director(string nombreCompleto_, string paisNacimiento_, string genero_, int anioNacimiento_ ){
        nombreCompleto = nombreCompleto_;
        paisNacimiento = paisNacimiento_;
        genero = genero_;
        anioNacimiento = anioNacimiento_;
}

//Implementación de los getters de la clase
string Director:: getNombreCompleto(){
    return nombreCompleto;
}

string Director::getPaisNacimiento(){
    return paisNacimiento;
}

string Director:: getGenero(){
    return genero;
}

int Director:: getAnioNacimiento(){
    return anioNacimiento;
}

//Implementacion de los setters
void Director:: setNombreCompleto(string nombreCompleto_){
    nombreCompleto = nombreCompleto_;
}

void Director:: setPaisNacimiento(string paisNacimiento_){
    paisNacimiento = paisNacimiento_;
}

void Director:: setGenero(string genero_){
    genero = genero_;
}

void Director:: setAnioNacimiento(int anioNacimiento_){
    anioNacimiento = anioNacimiento_;
}
#endif 