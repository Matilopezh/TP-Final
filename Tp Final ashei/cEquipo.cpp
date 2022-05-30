
#include "cEquipo.h"


cEquipo::cEquipo(const string _Codigo, const  string _descripcion, Estado _estado, const string _Nombre, const float _Peso, const string _Ubicacion_a_Guardar, string _Ubicacion_actual){
	Codigo = _Codigo;
	descripcion = _descripcion;
	estado = _estado;
	Nombre = _Nombre;
	Peso = _Peso;
	Ubicacion_a_Guardar = _Ubicacion_a_Guardar;
	Ubicacion_actual = _Ubicacion_actual;

}



cEquipo::~cEquipo(){

}





void cEquipo:: Alarma_ubicacion(){

}


void cEquipo:: imprimir(){

}


void cEquipo:: mantenimiento_correctivo(){

}


void cEquipo:: mantenimiento_previo(){

}


void cEquipo:: to_string(){

}