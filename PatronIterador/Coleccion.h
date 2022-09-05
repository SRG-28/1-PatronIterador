#pragma once
#include"Iterador.h"

class Coleccion {
private:
	Persona * * vec; //vector de objetos dinamico
	int cant; //cantidad de elementos valiudos
	int tama;  //tamano del vector 

public:
	Coleccion(int n); //n es el tamano en tiempo de ejecucion
	Coleccion(Coleccion* ); //constructor copia
	virtual ~Coleccion();
	bool vacia();
	int getCantidad();
	Persona* obtener(int pos); //da la posicion y devuelve el objeto dinamico de la persona
	void agregar(Persona* );
	void agregar(Coleccion);
	bool eliminar(int pos);
	Persona* eliminar(Persona*);
	Iterador* obtenerIterador(); //Aqui se crea  
	string toString() const;

};

//---------------------DEFINICION----------------------------
Coleccion::Coleccion(int n) {
	tama = n;
	cant = 0;
	vec = new Persona*[tama];
	for (int i = 0; i < tama; i++)
		vec[i] = NULL; //LIMPIEZA DEL VECTOR 
}

Coleccion::Coleccion(Coleccion*) {
	 //realizar trabajo en casa
}

Coleccion::~Coleccion() {
	//realizar trabajo en casa
}

bool Coleccion::vacia() {
	return(cant == 0);
}

int Coleccion::getCantidad() {
	return cant; //cantidad de elementos en el vector
}

Persona* Coleccion::obtener(int pos) {
	return vec[pos];  //retorna la persona que esta en esta posicion
}

void Coleccion::agregar(Persona* p) {
	if (cant < tama)
		vec[cant++] = p;
}

void Coleccion::agregar(Coleccion) {
	//realizar en casa
}

bool Coleccion::eliminar(int pos) {
	//realizar en casa
	return true;
}

Persona* Coleccion::eliminar(Persona*) {
	//realizar en casa
	return NULL;	
}

Iterador* Coleccion::obtenerIterador() {
	return new Iterador(vec, cant);
}

string Coleccion::toString() const {
	stringstream s;
	s << "-------------Listado------------------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->toString() << endl;
	s << "--------------------------------------------" << endl;
	return s.str();
}