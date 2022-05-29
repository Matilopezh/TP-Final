///////////////////////////////////////////////////////////
//  cRespirador.h
//  Implementation of the Class cRespirador
//  Created on:      29-may.-2022 14:51:32
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_754696F8_6DA7_42d4_8DDD_8CB63915A25D__INCLUDED_)
#define EA_754696F8_6DA7_42d4_8DDD_8CB63915A25D__INCLUDED_

#include "cEquipo.h"

class cRespirador : public cEquipo
{

public:
	cRespirador();
	virtual ~cRespirador();

	void Alarma_ubicacion();
	void imprimir();
	void mantenimiento_correctivo();
	void mantenimiento_previo();
	void to_string();

private:
	bool Alarma_alto_Flujo;
	bool Alarma_bajo_Flujo;
	bool Alarma_Taponamiento;
	float Flujo_de_salida;
	float Valor_reparacion;

};
#endif // !defined(EA_754696F8_6DA7_42d4_8DDD_8CB63915A25D__INCLUDED_)
