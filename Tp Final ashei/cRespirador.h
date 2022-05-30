
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
