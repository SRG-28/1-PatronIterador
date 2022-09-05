#include"Coleccion.h"
using namespace std;

int main() {
	cout << "---------------Declarar un Iterador--------------" << endl;
	Iterador* iter = NULL;
	cout << "Crear un contenedor..." << endl;
	Coleccion COA(10); //objeto automatico

	cout << "Crear Personas..." << endl;
	Persona* per1 = new Persona("3434", "Juan", 34 );
	Persona* per2 = new Persona("243455", "Ana",54 );
	Persona* per3 = new Persona("3223", "Pedro", 43);
	Persona* per4 = new Persona("567", "Georges",30);
	Persona* per5 = new Persona("12344", "Luis", 23);
	Persona* per6 = new Persona("56778", "Talia", 67);

	cout << "Ingresar personas a la coleccion" << endl;
	COA.agregar(per1);
	COA.agregar(per2);
	COA.agregar(per3);
	COA.agregar(per4);
	COA.agregar(per5);
	COA.agregar(per6);

	cout << "Crear un iterador para recorrer la coleccion" << endl;
	iter = COA.obtenerIterador(); // ya iter esta viendo la primera posicion del contenedor

	cout << "Se puede utilizar el iterador construido..." << endl;
	while (iter->masElementos()) {
		cout << iter->proximoElemento()->toString() << endl;

	}
	cout << "------------FIN---------------------------" << endl;
	delete iter;

	system("pause");
	return 0;
}