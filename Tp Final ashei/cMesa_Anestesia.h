
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
