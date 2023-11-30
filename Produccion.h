//Este archivo nos ayudará a definir los atributos y métodos pertenecientes a la superclase, al igual que los getters y setters que utilizaremos con todos nuestras subclases. 

#ifndef PRODUCCION_H
#define PRODUCCION_H
#include <iostream>
#include <string> //Incluí esta línea porque estoy trabajando únicamente con strings
#include "Director.h"
#include <vector>
using namespace std;

class Produccion //Creo mi super clase
{
protected: //Debido a que las subclases heredarán todos los siguientes atributos, utilicé la palabra protected y no private
    string titulo;
    string paisOrigen;
    string estudio;
    int anioEstreno;
    int duracion;
    Director director;
    vector<string> datosCuriosos; //Debido a que los datos curiosos de cada produccion audiovisual están compuestos por varios strings, estos serán almacenados en un vector. 
public:
    // Las siguientes líneas ayudarán a crear un constructor, el cual contendrá los atributos de cada producción audiovisual
    Produccion();
    Produccion(string titulo_, string paisOrigen_, string estudio_, int anioEstreno_, int duracion_); //Este es el constructor de Produccion aún sin implementar

    // Los siguientes métodos son los getters necesarios para el programa
    string getTitulo();
    string getPaisOrigen();
    string getEstudio();
    int getAnioEstreno();
    int getDuracion();
    Director getDirector();
    vector<string> getDatosCuriosos();

    // Las siguientes líneas de código contienen los setters, pero sin implementación
    void setTitulo(string titulo_);
    void setPaisOrigen(string paisOrigen_);
    void setEstudio(string estudio_);
    void setAnioEstreno(int anioEstreno_);
    void setDuracion(int duracion_);
    void setDirector(Director director_);
    void setDatosCuriosos(vector<string> datosCuriosos_);
    
    //Este último método nos servirá para agregar los datos curiosos a su vector
    void addDatoCurioso(string datoCurioso_);
};

//Implementación del constructor dandole un valor inicial a sus parámetros
Produccion::Produccion(){
    titulo = "";
    paisOrigen = "";
    estudio = "";
    anioEstreno = 0;
    duracion = 0;
}

//Implementación del constructor Produccion
Produccion::Produccion(string titulo_, string paisOrigen_, string estudio_, int anioEstreno_, int duracion_){
        titulo = titulo_;
        paisOrigen = paisOrigen_;
        estudio = estudio_;
        anioEstreno = anioEstreno_;
        duracion = duracion_;
}

//Implementación de los getters de la clase
string Produccion:: getTitulo() { 
    return titulo; 
}

string Produccion:: getPaisOrigen(){
    return paisOrigen;
}

string Produccion:: getEstudio(){
    return estudio;
}

int Produccion :: getAnioEstreno(){
    return anioEstreno;
}

int Produccion:: getDuracion(){
    return duracion;
}

Director Produccion:: getDirector(){
    return director;
}

vector <string> Produccion:: getDatosCuriosos(){
    return datosCuriosos; 
}

//Implementación de los setters
void Produccion:: setTitulo(string titulo_) {
    titulo = titulo_; 
}

void Produccion:: setPaisOrigen(string paisOrigen_){
    paisOrigen = paisOrigen_;   
}    
 
void Produccion:: setEstudio(string estudio_){
    estudio = estudio_;
} 

void Produccion:: setAnioEstreno (int anioEstreno_){
    anioEstreno = anioEstreno_;
}

void Produccion:: setDuracion(int duracion_){
    duracion = duracion_;
}

void Produccion:: setDirector(Director director_){
    director = director_;
}

void Produccion:: setDatosCuriosos(vector<string> datosCuriosos_){
    datosCuriosos = datosCuriosos_;
}

//Implementación del método utilizado para agregar los datos curiosos de cada producción
void Produccion:: addDatoCurioso(string datoCurioso_){
    datosCuriosos.push_back(datoCurioso_);
}
#endif