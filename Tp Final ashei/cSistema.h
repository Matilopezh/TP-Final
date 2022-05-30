
#include "cEquipo.h"
#include "cListaT.h"

class cSistema
{

public:
	cSistema();
	virtual ~cSistema();
	cEquipo *m_cEquipo;

	cEquipo* Buscar_equipo();
	cListaT<cEquipo>* Buscar_equipos();
	void control_correctivo();
	void control_preventivo();
	void pagar();
	void Usar_equipo();

private:
	cListaT<cEquipo>* Lista_equipos;
	cListaT<cEquipo>* Lista_equipos_Mantenimiento_cor;
	cListaT<cEquipo>* Lista_equipos_fuera_lugar;
	cListaT<cEquipo>* Lista_equipos_mantenimiento_prev;
	float Saldo;

};
