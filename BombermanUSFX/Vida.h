#pragma once
class Vida
{
private:
	int numberLife;
	int vidaRestante;
public:
	int getNumberLife() { return numberLife; }
	void setNumberLife(int _numberLife) { numberLife = _numberLife; }

	int getVidaRestante() { return vidaRestante; }
	void setVidaRestante(int _vidaRestante) { vidaRestante= _vidaRestante; }
};

