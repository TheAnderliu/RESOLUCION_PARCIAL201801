#include "stdafx.h"



CEvento_Tecla::CEvento_Tecla(int _energia, int _n) :CEvento( _energia, _n)
{
}


CEvento_Tecla::~CEvento_Tecla()
{
}



void CEvento_Tecla::mostrarfecha(){
	system("cls");
	Console::SetCursorPosition(15, 15);
	cout << "15:00:00";
	_sleep(1000);
	energia--;

}

void CEvento_Tecla::set_n(int _n){
	n = _n;
	energia--;

}
