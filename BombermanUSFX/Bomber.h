#pragma once
class Bomber
{
private:
	int altoAvatar;
	int anchoAvatar;
	int skinAvatar;

public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar;}

	int getSkinAvatar() { return skinAvatar; }
	void setSkinAvatar(int _skinAvatar) { skinAvatar = _skinAvatar; }

	void morir();

	void mover();

	void colocarBomba();

	void activarBoma();

	void reaparición();
};

