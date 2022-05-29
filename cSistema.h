///////////////////////////////////////////////////////////
//  cSistema.h
//  Implementation of the Class cSistema
//  Created on:      29-may.-2022 14:51:32
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_DAF1755A_6D7E_4937_9328_A9154EA70067__INCLUDED_)
#define EA_DAF1755A_6D7E_4937_9328_A9154EA70067__INCLUDED_

#include "cEquipo.h"
#include "template cLista.h"

class cSistema
{

public:
	cSistema();
	virtual ~cSistema();
	cEquipo *m_cEquipo;
	template cLista *m_template cLista;

	cEquipo Buscar_equipo();
	cLista Buscar_equipos();
	void control_correctivo();
	void control_preventivo();
	void pagar();
	void Usar_equipo();

private:
	cLista Lista_equipos;
	cLista Lista_equipos-Mantenimiento_cor;
	cLista Lista_equipos_fuera_lugar;
	cLista Lista_equipos_mantenimiento_prev;
	float Saldo;

};
#endif // !defined(EA_DAF1755A_6D7E_4937_9328_A9154EA70067__INCLUDED_)
