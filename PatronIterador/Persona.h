#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Persona {
private:
	string cedula;
	string nombre;
	int edad;
public:
	Persona(string = "", string = "", int = 0);
	virtual~Persona();
	string toString() const;
};


//-----------------Definicion-----------------------

Persona::Persona(string ced, string nom, int ed)
	: cedula(ced), nombre (nom), edad(ed) {
}

Persona::~Persona() {
}

string Persona::toString() const {
	stringstream s;
	s << "Cedula : " << cedula << endl
		<< "Nombre : " << nombre << endl
		<< "Edad : " << edad << endl << endl;
	return s.str();
}