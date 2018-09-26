#include "stdafx.h"



CAsistente::CAsistente()
{
	n = 3;
	energia = 15;
	objBateria = new CEvento_Bateria(energia, n);
	objTecla = new CEvento_Tecla(energia, n);

}


CAsistente::~CAsistente()
{
}


void CAsistente::presiona_tecla_t(){
	objTecla->mostrarfecha();
	energia--;
}

void CAsistente::presiona_tecla_c(int _n){
	objTecla->set_n(_n);
	n = _n;
	energia--;

}

void CAsistente::bateria_restante(){
	objBateria->Bateria_restante(energia, n);
}

void CAsistente::bateria_minima(){

	objBateria->Bateria_minima(energia);
}
