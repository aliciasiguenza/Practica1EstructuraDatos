#include "NodoCola.h"

NodoCola::NodoCola(){
    elemento = '0';
    siguiente = NULL;
}

NodoCola::NodoCola(char e, NodoCola *sig){
    elemento = e;
    siguiente = sig;
}

NodoCola::~NodoCola(){}