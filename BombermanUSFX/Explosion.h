#pragma once
class Explosion
{
private:
	int rangoExplosion;
	int tiempoDetonacion;
public:
	int getRangoExplosion() { return rangoExplosion; }
	void setRangoExplosion(int _rangoExplosion) { rangoExplosion = _rangoExplosion; }

	int getTiempoDetonación() { return tiempoDetonacion; }
	void setTiempoDetonacion(int _tiempoDetonacion) { tiempoDetonacion = _tiempoDetonacion; }
};

