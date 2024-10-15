#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"

class Cola{
    private:
        NodoCola *primero;
        NodoCola *ultimo;
        int longitud;
    public:
        Cola();
        ~Cola();
        int get_longitud();
        void encolar(char);
        char inicio();
        char fin();
        char desencolar();
        bool es_vacia();
        void mostrarCola(); //No es correcto
};
#endif