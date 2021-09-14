#pragma once
class Enemigo
{
private:
	int anchoAvatar;
	int altoAvatar;
	int skinAvatar;
	int posicionEjeX;
	int posicionEjeY;
public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	int getSkinAvatar() { return skinAvatar; }
	void setSkinAvatar(int _skinAvatar) { skinAvatar = _skinAvatar; }

	int getPosicionEjeX() { return posicionEjeX; }
	void setPosicionEjeX(int _posicionEjeX) { posicionEjeX = _posicionEjeX; }

	int getPosicionEjeY() { return posicionEjeY; }
	void setPosicionEjeY(int _posicionEjeY) { posicionEjeY = _posicionEjeY; }

	void matar();

	void mover();

};

