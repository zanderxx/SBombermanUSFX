#pragma once
class Enemigo
{
private:
	int anchoAvatar;
	int altoAvatar;
	int skinAvatar;
public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	int getSkinAvatar() { return skinAvatar; }
	void setSkinAvatar(int _skinAvatar) { skinAvatar = _skinAvatar; }

	void matar();

	void mover();

};

