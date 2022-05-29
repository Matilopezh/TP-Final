///////////////////////////////////////////////////////////
//  cMesa_Anestesia.h
//  Implementation of the Class cMesa_Anestesia
//  Created on:      29-may.-2022 14:51:31
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_84643791_5C00_4826_88F8_58D724B51564__INCLUDED_)
#define EA_84643791_5C00_4826_88F8_58D724B51564__INCLUDED_

#include "cEquipo.h"

class cMesa_Anestesia : public cEquipo
{

public:
	cMesa_Anestesia();
	virtual ~cMesa_Anestesia();

	void Alarma_ubicacion();
	void imprimir();
	void mantenimiento_correctivo();
	void mantenimientos_previo();
	void to_string();

private:
	bool Alarma_alta_Frec;
	bool Alarma_baja_Frec;
	float Nivel_suenio;
	float Valor_reparacion;
	float Volumen_Flujo;

};
#endif // !defined(EA_84643791_5C00_4826_88F8_58D724B51564__INCLUDED_)
