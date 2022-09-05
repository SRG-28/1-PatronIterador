#pragma once
#include"Persona.h"
using namespace std;

class Iterador{
private: 
	Persona * *vec; //en este momento absorbe la clase persona(Vector de Personas)
	int i; //subindice por el que vamos en el vector
	int k; //cantidad de valores validos en el vector

public:
	Iterador(Persona* *vector, int can);
	virtual ~Iterador();
	bool masElementos(); //pregunta si hay mas elementos
	Persona* proximoElemento(); //Nos pasa de elemento a elemento 
};


//--------------------Definicion de los metodos---------------------
Iterador::Iterador(Persona* *vector, int can) {
	vec = vector;
	k = can;
	i = 0; 
}

Iterador::~Iterador(){
}

bool Iterador::masElementos() {
	return i < k;
}

Persona* Iterador::proximoElemento() {
	Persona* r = NULL; //variable puntero comodin  //retorna un NULL cuando ya no hay mas elementos que recorrer
	if (masElementos()) {
		r = vec[i++];  //En r cae la persona de la posicion i del vector 
	}
	return r;
}