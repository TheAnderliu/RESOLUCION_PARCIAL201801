#pragma once
class CAsistente
{
private:
	int n, energia;
	CEvento_Bateria *objBateria;
	CEvento_Tecla *objTecla;

public:
	CAsistente();
	~CAsistente();
	void presiona_tecla_t();
	void presiona_tecla_c(int _n);
	void bateria_restante();
	void bateria_minima();

};

