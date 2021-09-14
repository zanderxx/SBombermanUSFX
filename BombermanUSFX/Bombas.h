#pragma once
class Bombas
{
private:
	int rangoExplosion;
	int posicionEjeY;
	int posicionEjeX;
	int detonacionControlada;
	int bombaColocada;
	int bombaExplota;
public:
	int getRangoExplosion() { return rangoExplosion; }
	void setRangoExplosion(int _rangoExplosion) {rangoExplosion = _rangoExplosion; }

	int getPosicionEjeY() { return posicionEjeY; }
	void setPosicionEjeY(int _posicionEjeY) { posicionEjeY = _posicionEjeY; }

	int getPosicionEjeX() { return posicionEjeX; }
	void setPosicionEjeX(int _posicionEjeX) { posicionEjeX = _posicionEjeX; }

	int getDetonacionControlada() { return detonacionControlada; }
	void setDetonacionControlada(int _detonacionControlada) { detonacionControlada = _detonacionControlada; }

	int getBombaColocada() { return bombaColocada; }
	void setBombaColocada(int _bombaColocada) { bombaColocada = _bombaColocada; }

	int getBombaExplota() { return bombaExplota; }
	void setBombaExplota(int _bombaExplota) { bombaExplota = _bombaExplota; }

	void explotar();


};

