#include <iostream>
using namespace std;

template <class T>
class cListaT {
private:
	T**lista;
	unsigned int ca;
	unsigned int ct;
	void resize();
public:
	cListaT(unsigned int _ca, unsigned int _ct);
	void operator+ (T* Elemento);
	void operator-(T* Elemento);
	T* operator[](unsigned int codigo);
	~cListaT()

};

template <class T>
cListaT<T>::cListaT(unsigned int _ca, unsigned int _ct)
{
	ca = _ca;
	ct = _ct;
	lista = new T*[ct];
	for (int i = 0; i < ct; i++){
		lista[i] = nullptr;
	}

}
template <class T>
cListaT<T>:: ~cListaT()
{
	for (int i = 0; i < ct; i++) {
		delete lista[i];
	}
	delete[] lista;
}
template<class T>
inline void cListaT<T>:: operator+(T* Elemento)
{
	try {
		if (Elemento == nullptr)throw "Error Elemento Nulo";
	}
	if (ca >= tam)
	{
		throw new exception("No hay tamaño suficiente para agregar el item");
	}
	else
	{
		lista[ca] = Elemento;
		ca++;
	}
}
template <class T>
inline void cListaT<T>:: operator-(T* Elemento) {
	try {
		if (Elemento == nullptr)throw "Error Elemento nulo";
	}
	if (lista[ca] == Elemento)
	{
		lista[ca] == nullptr;
		ca--;
	}
	unsigned int pos = 0;
	else {
		for (int i = 0; i < ca - 1; i++)
		{
			if (lista[i] == Elemento)
			{
				pos = i;
			}
		}
		for (int j = pos; j < ca - 1; j++) {
			lista[j] = lista[j + 1];
		}
		lista[ca] = nullptr;
		ca--;
	}

}

template <class T>
inline T* cListaT<T>::operator[](unsigned int _codigo) {
	try {
		if (Elemento == nullptr)throw "Error Elemento nulo";
	}
	for (int i = 0; i < ca; i++) {
		if (lista[i].GetCodigo() == _codigo) return lista[i];
	}
	else return nullptr;
}
//cLista<aviones>listaaviones;
//buscar for (int i=0;i<ca;i++){lista[i].getcodigo()==_codigo;
//return pos;
