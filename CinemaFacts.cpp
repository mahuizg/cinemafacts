//Dentro de este archivo, inicializaré los datos de las subclases de Produccion Audiovisual. También utilizaré este archivo para mostrar la información de cada una de las peliculas, cortometrajes y series. Finalmente, también incluye mi main, donde llamo una función para crear el menú principal.
//Utilizaré las siguientes líneas para que este archivo .cpp logre incluir aquello contenido en los archivos .h de mis subclases
#include "Pelicula.h"
#include "Serie.h"
#include "Cortometraje.h"
#include "Director.h"

#include <iostream>
#include <string> //Escribí esta línea porque trabajo con puros strings
#include <vector> //A lo largo del programa, utilizaré vectores para almacenar objetos del tipo Director, Pelicula, Serie, y VideoMusical

using namespace std;

vector<Director> directores;
vector<Pelicula> peliculas;
vector<Serie> series;
vector<Cortometraje> cortometrajes;

// Utilizaré las siguientes funciones para inicializar los datos de mis tres tipos de producciones audiovisuales
void initPeliculas(){
    // Inicializo los valores de 3 diferentes objetos de tipo "Director". En el archivo Director.h, elaboré el constructor que me permite hacer esto y que determina el orden en el que puse los datos de cada uno
    Director director_1 = Director("Elem Klímov", "Bielorrusia", "Masculino", 1933);
    Director director_2 = Director("Henry Selick", "Estados Unidos", "Masculino", 1952);
    Director director_3 = Director("Jean-Pierre Jeunet", "Francia", "Masculino", 1953);

    // Añado estos directores al vector directores mediante la función .pus_back
    directores.push_back(director_1);
    directores.push_back(director_2);
    directores.push_back(director_3);

    // Inicializo los valores de los 3 objetos de tipo Pelicula que usaré en este programa. Nuevamente uso el constructor que ya había establecido en Pelicula.h
    Pelicula pelicula_1 = Pelicula("Come and See", "Unión Soviética", "BelarusFilm", 1985, 142);
    Pelicula pelicula_2 = Pelicula("Coraline", "Estados Unidos", "Laika Entertainment", 2009, 100);
    Pelicula pelicula_3 = Pelicula("Amélie", "Francia", "France3 Cinéma",  2001, 122);

    // Ahora, asigno los directores a sus respectivas películas utilizando un setter
    pelicula_1.setDirector(director_1);
    pelicula_2.setDirector(director_2);
    pelicula_3.setDirector(director_3);

    // Añado los datos curiosos a cada una de las películas con la función addDatoCurioso()
    pelicula_1.addDatoCurioso("Debido al bajo presupuesto con el que contaba la producción de la película, se vieron obligados a usar municiones reales");
    pelicula_1.addDatoCurioso("Para lucir cada vez menos sano, el actor Alexéi Kravchenko fue sometido a una dieta que lo dejó en los huesos");
    pelicula_1.addDatoCurioso("Originalmente, el nombre de la película iba a ser 'Matar a Hitler'");
    pelicula_2.addDatoCurioso("El nombre de Coraline fue producto de un error al escribirlo por parte de Neil Gaiman, autor del libro, al darse cuenta decidió dejarlo así pues le pareció más interesante.");
    pelicula_2.addDatoCurioso("Esta película de stop-motion tardó cinco años en realizarse");
    pelicula_2.addDatoCurioso("Todos los suéteres utilizados por Coraline fueron tejidos a mano por Althea Chrome.");
    pelicula_3.addDatoCurioso("La cafetería donde trabaja Amélie se ha hecho tan famosa como la Torre Eiffel. Miles de personas la visitan diariamente");
    pelicula_3.addDatoCurioso("Su director quería a Michael Nyman para componer la música de la película, pero no estaba disponible. Así fue como Jeunet terminó trabajando con Yann Tiersen, quien creó una de las bandas sonoras mas celebradas de la historia del cine");
    pelicula_3.addDatoCurioso("Con 23 millones de espectadores en todo el mundo, es una de las cinco películas francesas más taquilleras de la historia");


    // Finalmente, una vez que terminé de asignarle todos los atributos a cada una de las películas, las añado al vector peliculas.
    peliculas.push_back(pelicula_1);
    peliculas.push_back(pelicula_2);
    peliculas.push_back(pelicula_3);
};

void initSeries(){
    //Esta función se comporta de la misma manera que la funcion initPeliculas()
    // Inicializo los valores de los distintos directores de las 3 series que utilizaré para el programa
    Director director_1 = Director("David Lynch", "Estados Unidos", "Masculino", 1946);
    Director director_2 = Director("Vince Gilligan", "Estados Unidos", "Masculino", 1967);
    Director varios_directores = Director("Varios directores", "Varios paises", "Varios generos", 0);

    // Creo tres objetos de tipo Serie para cada uno de los programas de televisión que utilizo. 
    //En esta ocasión, mi constructor (el cual se encuentra en el archivo Serie.h) contiene los atributos titulo y paisOrigen que comparte con la superclase, sin embargo, también tiene dos atributos propios de la clase Serie, los cuales son numTemporadas y numEpisodios 
    Serie serie_1 = Serie("Twin Peaks", "Estados Unidos", "ABC", 1990, 2, 48);
    Serie serie_2 = Serie("Breaking Bad", "Estados Unidos", "Sony Pictures", 2008, 5, 62);
    Serie serie_3 = Serie("Bojack Horseman", "Estados Unidos", "Netflix",  2014, 6, 77);

    // Nuevamente uso un setter para asignar los directores a sus series
    serie_1.setDirector(director_1);
    serie_2.setDirector(director_2);
    serie_3.setDirector(varios_directores);

    // Añado datos curiosos
    serie_1.addDatoCurioso("David Lynch y Mark Frost, el showrunner de Twin Peaks, se conocieron cuando trabajaban juntos para hacer una película biográfica de Marilyn Monroe, la cual nunca se hizo");
    serie_1.addDatoCurioso("Los nombres de los personajes de Twin Peaks están inspirados por íconos del cine noir");
    serie_1.addDatoCurioso("Steven Spielberg estuvo cerca de dirigir el primer capítulo de la segunda temporada");
    serie_2.addDatoCurioso("Breaking Bad impulsó el turismo en Albuquerque, Nuevo México; y por ende, mejoró su economía");
    serie_2.addDatoCurioso("Bryan Cranston no era la primera elección para hacer el papel de Walter White, y de hecho, Vince Gilligan tuvo que convencer a los productores del programa para que contrataran a Cranston.");
    serie_2.addDatoCurioso("El último día de filmación de 'Breaking Bad', Cranston se tatuó el icónico logo del programa.");
    serie_3.addDatoCurioso("Bojack Horseman surgió cuando una amiga caricaturista de Bob-Waksberg llamada Lisa Hanawalt le comentó el concepto. Posteriormente, Lisa formó parte del equipo de diseño de producción del programa.");
    serie_3.addDatoCurioso("Will Arnett, quien hace la voz de Bojack Horseman, dice que este ha sido uno de los personajes más complejos con los que ha trabajado");
    serie_3.addDatoCurioso("Algunos de los personajes de la serie están inspirados en compañeros de clase de Bob-Waksberg");

    // Añado las series, con todos sus atributos, al vector
    series.push_back(serie_1);
    series.push_back(serie_2);
    series.push_back(serie_3);
};

void initCortometrajes(){
   //Nuevamente esta función tiene el mismo comportamiento que las dos anteriores, y tiene los mismos atributos que la clase Pelicula
   // Inicializo los valores de los atributos de los directores de los cortos usando el constructor que se encuentra en Director.h
    Director director_1 = Director("Hayao Miyazaki", "Japón", "Masculino", 1941);
    Director director_2 = Director("Wilfred Jackson", "Estados Unidos", "Masculino", 1906);
    Director director_3 = Director("Paul Thomas Anderson", "Estados Unidos", "Masculino", 1970);

    // Añado estos directores al vector directores perteneciente a esta funcion (es diferente al vector directores de la función initPeliculas() y de initSeries().)
    directores.push_back(director_1);
    directores.push_back(director_2);
    directores.push_back(director_3);
    
     // Creo los objetos de tipo cortometraje utilizando el constructor que establecí dentro de mi clase Cortometraje. 
    Cortometraje cortometraje_1 = Cortometraje("Yuki's Sun", "Japón", "A-Production", 1972, 5);
    Cortometraje cortometraje_2 = Cortometraje("The Goddess of Spring", "Estados Unidos", "Walt Disney Productions", 1934, 9);
    Cortometraje cortometraje_3 = Cortometraje("Anima", "Reino Unido", "PASTEL",2019, 15);

    // Asigno los directores a sus cortometrajes
    cortometraje_1.setDirector(director_1);
    cortometraje_2.setDirector(director_2);
    cortometraje_3.setDirector(director_3);
    
    // Añado datos curiosos a cada uno de ellos
    cortometraje_1.addDatoCurioso("Yuki's Sun fue el primer cortometraje del famoso animador e ilustrador Hayao Miyazaki");
    cortometraje_1.addDatoCurioso("Fue el episodio piloto para una serie de TV que nunca se realizó");
    cortometraje_1.addDatoCurioso("Años después de Yuki's Sun, Hayao Miyazaki crearía Estudios Ghibli");
    cortometraje_2.addDatoCurioso("Este cortometraje fue realizado por animadores de Disney como una práctica antes de comenzar 'Blancanieves', con el propósito de aprender a animar correctamente el movimiento del ser humano. Claramente fallaron en esto");
    cortometraje_2.addDatoCurioso("Debido a la animación poco realista de este cortometraje, Disney decidió contratar a un profesor para que diera clases de anatomía a sus animadores");
    cortometraje_2.addDatoCurioso("Este corto está basado en el mito de Hades y Perséfone");
    cortometraje_3.addDatoCurioso("El protagonista de este corto es Thom Yorke, integrante de la banda Radiohead. Anteriormente, Paul Thomas Anderson ya había trabajado con Radiohead, ayudándoles con la dirección de algunos videos musicales");
    cortometraje_3.addDatoCurioso("Fue filmada entre el 11 y 19 de mayo en Francia y Praga");
    cortometraje_3.addDatoCurioso("El director de fotografía de Anima fue el iraní Darius Khondji, quien también ha trabajado con Alejandro González Iñárritu");


    // Una vez que tengamos todos los atributos de cada uno de los cortometrajes, los añadiremos al vector cortometrajes
    cortometrajes.push_back(cortometraje_1);
    cortometrajes.push_back(cortometraje_2);
    cortometrajes.push_back(cortometraje_3);
};

// Ahora, van las funciones que nos ayudarán a desplegar la información al usuario en la terminal
void printPeliculas(){
    cout << endl;
    cout << "PELICULAS:" << endl;
    for (int i = 0; i < peliculas.size(); i++){
        //Establezco un ciclo for con la longitud del vector peliculas para que este ciclo se repita para cada una de las peliculas que componen mi vector.
        //Utilizo un getter para obtener la información de cada una de las películas y uso un índice i para que mis getters solo desplieguen la información de una posición del vector cada que este ciclo se ejecute
        cout << "---------------------------------------------" << endl;
        cout << "Título: " << peliculas[i].getTitulo() << endl;
        cout << "País de origen: " << peliculas[i].getPaisOrigen() << endl;
        cout << "Año de estreno: " << peliculas[i].getAnioEstreno() << endl;
        cout << "Duración: " << peliculas[i].getDuracion() << " minutos"<< endl;
        cout << "Estudio: " << peliculas[i].getEstudio() << endl;
        cout << "Director: " << peliculas[i].getDirector().getNombreCompleto() << endl;
        cout << endl;
        cout << "Datos curiosos: " << endl;
        for(int j=0; j<peliculas[i].getDatosCuriosos().size(); j++){ //Vuelvo a utilizar un ciclo for para poder imprimir los datos curiosos uno por uno para que se vea más ordenado
            cout << j+1 << ". " << peliculas[i].getDatosCuriosos()[j] << endl;
        }
        cout << "---------------------------------------------" << endl;
        cout << endl;
    }
};

void printSeries() { //Esta función se comporta de la misma manera que la función printPeliculas()
    cout << endl;
    cout << "SERIES:" << endl;
    for (int i = 0; i < series.size(); i++){
        cout << "---------------------------------------------" << endl;
        cout << "Título: " << series[i].getTitulo() << endl;
        cout << "País de origen: " << series[i].getPaisOrigen() << endl;
        cout << "Año de estreno: " << series[i].getAnioEstreno() << endl;
        cout << "Numero de temporadas: " << series[i].getNumTemporadas() << endl;
        cout << "Numero de episodios: " << series[i].getNumEpisodios() << endl;
        cout << "Estudio: " << series[i].getEstudio() << endl;
        cout << "Director: " << series[i].getDirector().getNombreCompleto() << endl;
        cout << endl;
        cout << "Datos curiosos: " << endl;
        for(int j=0; j<series[i].getDatosCuriosos().size(); j++){
            cout << j+1 << ". " << series[i].getDatosCuriosos()[j] << endl;
        }
        cout << "---------------------------------------------" << endl;
        cout << endl;
    }

};

void printCortometrajes(){ //De nuevo,esta función se comporta de la misma manera que las dos anteriores
    cout << endl; 
    cout << "CORTOMETRAJES:" << endl;
    for (int i = 0; i < cortometrajes.size(); i++) {
        cout << "---------------------------------------------" << endl;
        cout << "Título: " << cortometrajes[i].getTitulo() << endl;
        cout << "País de origen: " << cortometrajes[i].getPaisOrigen() << endl;
        cout << "Año de estreno: " << cortometrajes[i].getAnioEstreno() << endl;
        cout << "Duración: " << cortometrajes[i].getDuracion() << " minutos" << endl;
        cout << "Estudio: " << cortometrajes[i].getEstudio() << endl;
        cout << "Director: " << cortometrajes[i].getDirector().getNombreCompleto() << endl;
        cout << endl;
        cout << "Datos curiosos: " << endl;
        for(int j=0; j<cortometrajes[i].getDatosCuriosos().size(); j++){
            cout << j+1 << ". " << cortometrajes[i].getDatosCuriosos()[j] << endl;
        }
        cout << "---------------------------------------------" << endl;
        cout << endl;
    }
};

void menu() { //Función que desplegará las opciones disponibles para el usuario
    int opcion;
    bool continua;
    continua = true;
    while (continua == true){ //Empiezo un ciclo while para que el menú se despliegue hasta que el usuario seleccione la opción 5 para salir del programa
        cout<< endl;
        cout << "¡Bienvenido/a a CinemaFacts!" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Películas" << endl;
        cout << "2. Series" << endl;
        cout << "3. Cortometrajes" << endl;
        cout << "------------------------------" << endl;
        cout << "4. Salir" << endl;
        cout<< endl;
        cout << "Selecciona una opción para ver sus datos curiosos: ";
        cin >> opcion;
        //Establezco una serie de condiciones usando un if anidado con las funciones que se deberán ejecutar dependiendo de la opción que el usuario ingrese
        if(opcion == 1){
            printPeliculas();
        }

        else if (opcion == 2){
            printSeries();
        }

        else if (opcion == 3){
            printCortometrajes();
        }

        else if (opcion == 4){
            cout<<endl;
            cout<< "¡Adiós! Gracias por usar CinemaFacts"<< endl;
            cout<<endl;
            continua = false; //Cambio el valor de la variable continua a false para romper el ciclo while que establecí al inicio de la función
        }
            
        else{
            cout<< "La opción que ingresaste no es válida. Vuelve a intentarlo."<<endl;
        }
        
    }
}

int main(){ //Esta es mi función principal donde utilizaré las funciones hechas para inicializar las peliculas, series y cortometrajes, y despliego el menu
    initPeliculas();
    initSeries();
    initCortometrajes();
    menu();
    return 0;
}