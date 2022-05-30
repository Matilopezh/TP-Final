
#include "cListaT.h"
#include "Estado.h"
#include "cFecha.h"
class cEquipo
{

public:
	cEquipo(const string _Codigo, const  string _descripcion, Estado _estado, const string _Nombre, const float _Peso, const string _Ubicacion_a_Guardar, string _Ubicacion_actual);
	virtual ~cEquipo();
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
	cListaT<cFecha>* Lista_Fechas;
	const string Nombre;
	const float Peso;
	const string Ubicacion_a_Guardar;
	string Ubicacion_actual;

};
