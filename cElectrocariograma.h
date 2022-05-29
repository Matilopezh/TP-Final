///////////////////////////////////////////////////////////
//  cElectrocariograma.h
//  Implementation of the Class cElectrocariograma
//  Created on:      29-may.-2022 14:51:31
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_DAC8ED19_3D1E_4e89_948A_50784DAA1714__INCLUDED_)
#define EA_DAC8ED19_3D1E_4e89_948A_50784DAA1714__INCLUDED_

#include "cEquipo.h"

class cElectrocariograma : public cEquipo
{

public:
	cElectrocariograma();
	virtual ~cElectrocariograma();

	void Alarma_ubicacion();
	void imprimir();
	void mantenimiento_correctivo();
	void mantenimiento_previo();
	void to_String();

private:
	bool Derivaciones_Ok;
	bool Modos_traficacion_Ok;
	float Valor_reparecion;

};
#endif // !defined(EA_DAC8ED19_3D1E_4e89_948A_50784DAA1714__INCLUDED_)
