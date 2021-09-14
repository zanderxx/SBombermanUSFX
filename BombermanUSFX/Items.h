#pragma once
class Items
{
private:
	int plusRangoExplosion;
	int aumentoVelocidad;
	int bombasSimultaneas;
	int tiempoAdicional;
public:
	int getPlusRangoExplosión() { return plusRangoExplosion; }
	void setPlusRangoExplosion(int _plusRangoExplosion) { plusRangoExplosion = _plusRangoExplosion; }

	int getAumentoVelocidad() { return aumentoVelocidad; }
	void setAumentoVelocidad(int _aumentoVelocidad) { aumentoVelocidad = _aumentoVelocidad; }

	int getBombasSimultaneas() { return bombasSimultaneas; }
	void setBombasSimultaneas(int _bombasSimultaneas) { bombasSimultaneas = _bombasSimultaneas; }

	int getTiempoAdicional() { return tiempoAdicional; }
	void setTiempoAdicional(int _tiempoAdicional) { tiempoAdicional = _tiempoAdicional; }
};

