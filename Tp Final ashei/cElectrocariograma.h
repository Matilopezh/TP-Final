
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
