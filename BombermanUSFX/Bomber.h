#pragma once
class Bomber
{
private:
	int altoAvatar;
	int anchoAvatar;
	int posicionX;
	int posicionY;
	int skinAvatar;

public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar;}

	int getSkinAvatar() { return skinAvatar; }
	void setSkinAvatar(int _skinAvatar) { skinAvatar = _skinAvatar; }

	int getPosicionX() { return posicionX; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }

	int getPosicionY() { return posicionY; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

	void morir();

	void mover();

	void colocarBomba();

	void reaparición();
};

