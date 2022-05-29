///////////////////////////////////////////////////////////
//  cEquipo.h
//  Implementation of the Class cEquipo
//  Created on:      29-may.-2022 14:51:31
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_AF775867_C158_410a_B107_E8C7977DA1F6__INCLUDED_)
#define EA_AF775867_C158_410a_B107_E8C7977DA1F6__INCLUDED_

#include "template cLista.h"

class cEquipo
{

public:
	cEquipo();
	virtual ~cEquipo();
	template cLista *m_template cLista;

	void virtual Alarma_ubicacion();
	void virtual imprimir();
	void virtual mantenimiento_correctivo();
	void virtual mantenimiento_previo();
	void virtual to_string();

private:
	const string Codigo;
	const  string descripcion;
	struct Dimensiones;
	Estado estado;
	cFecha Lista_Fechas;
	const string Nombre;
	const float Peso;
	const string Ubicacion_a_Guardar;
	String Ubicacion_actual;

};
#endif // !defined(EA_AF775867_C158_410a_B107_E8C7977DA1F6__INCLUDED_)
