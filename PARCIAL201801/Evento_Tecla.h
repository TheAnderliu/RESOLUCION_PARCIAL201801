#pragma once

class CEvento_Tecla :
	public CEvento
{
public:
	CEvento_Tecla(int _energia, int _n);
	~CEvento_Tecla();

	void mostrarfecha();
	void set_n(int _n);
};

