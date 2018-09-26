#pragma once

class CEvento_Bateria :
	public CEvento
{
public:
	CEvento_Bateria(int _energia, int _n);
	~CEvento_Bateria();
	void Bateria_restante(int _energia, int _n);
	void Bateria_minima(int _energia);
};

