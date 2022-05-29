///////////////////////////////////////////////////////////
//  cFecha.h
//  Implementation of the Class cFecha
//  Created on:      29-may.-2022 14:51:31
//  Original author: paris
///////////////////////////////////////////////////////////

#if !defined(EA_521622DF_641B_499f_883B_29EE22F1A224__INCLUDED_)
#define EA_521622DF_641B_499f_883B_29EE22F1A224__INCLUDED_

class cFecha
{

public:
	cFecha();
	virtual ~cFecha();

	void Dias_entre_fechas();
	void set_hora_actual();

private:
	int anio;
	int dia;
	int mes;

};
#endif // !defined(EA_521622DF_641B_499f_883B_29EE22F1A224__INCLUDED_)
