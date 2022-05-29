///////////////////////////////////////////////////////////
//  template cLista.h
//  Implementation of the Class template cLista
//  Created on:      29-may.-2022 14:51:32
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_3C696CC4_854B_449f_92FA_276138350FAA__INCLUDED_)
#define EA_3C696CC4_854B_449f_92FA_276138350FAA__INCLUDED_

#include "cFecha.h"

class template cLista
{

public:
	template cLista();
	virtual ~template cLista();
	cFecha *m_cFecha;

	void Agregsr();
	void Buscar();
	void Eliminar();
	void Filtrar();
	void Quitar();

private:
	int ca;
	int ca_max;
	int lista;

};
#endif // !defined(EA_3C696CC4_854B_449f_92FA_276138350FAA__INCLUDED_)
