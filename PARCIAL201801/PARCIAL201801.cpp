// PARCIAL201801.cpp: archivo de proyecto principal.

#include "stdafx.h"



int main()
{
	CAsistente * objAsistente = new CAsistente();
	int n;
	Console::SetWindowSize(40, 30);
	while (1)
	{
		system("cls");
		Console::SetCursorPosition(10, 15);
		cout << "En que puedo ayudarte?:" << endl;
		if (kbhit())
		{
			if (_getch()==toupper('T'))
			{
				objAsistente->presiona_tecla_t();
			}
			else if (_getch() == toupper('C'))
			{
				do{
				system("cls");
				Console::SetCursorPosition(10, 15);
				cout << "Ingrese el valor de n-> ";
				cin >> n;
			}while (n<=1||n>5);
				objAsistente->presiona_tecla_c(n);
			}
			objAsistente->bateria_restante();
			objAsistente->bateria_minima();
		}
	}

	_getch();
    return 0;
}
