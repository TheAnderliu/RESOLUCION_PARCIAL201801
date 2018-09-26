#include "stdafx.h"



CEvento_Bateria::CEvento_Bateria(int _energia, int _n) :CEvento(_energia, _n)
{
}


CEvento_Bateria::~CEvento_Bateria()
{
}


void CEvento_Bateria::Bateria_restante(int _energia, int _n){
	int energia = _energia;
	int n = _n;

	if (15-energia==n)
	{
		
		system("cls");
		Console::SetCursorPosition(15, 15);
		cout << "...beep..." << endl;

		for (int i = 0; i < energia; i++)
		{
			cout << (char)7<<endl;
			//cout << "Veces" << i+1<<endl;
			_sleep(1000);
		}
	}



}

void CEvento_Bateria::Bateria_minima(int _energia){
	int energia = _energia;
	if (energia==1)
	{
		system("cls");
		Console::SetCursorPosition(10, 15);
		cout << "Resta una unidad de energia"<<endl;
		_sleep(8000);
	}

}
