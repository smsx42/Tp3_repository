#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED
#include <string>

const std::string PATH_MATERIALES = "materiales.txt";
const std::string PATH_MAPA = "mapa.txt";

const int OPCION_1 = 1;
const int OPCION_2 = 2;
const int OPCION_3 = 3;
const int OPCION_4 = 4;
const int OPCION_5 = 5;
const int OPCION_6 = 6;
const int OPCION_7 = 7;
const int OPCION_8 = 8;
const int OPCION_9 = 9;
const int OPCION_10 = 10;

const char CAMINO = 'T';
const char LAGO = 'L';
const char CONSTRUIBLE = 'C';

#ifdef __linux__
#define CLR_SCREEN "clear"
#endif // __linux__

#ifdef __MINGW32__
#define CLR_SCREEN "CLS"
#endif // __MINGW32__

#endif // CONSTANTES_H_INCLUDED