#pragma once
#include<Dxlib.h>

class System {
public:
	System();
	~System();
	void ALL();
	bool getAlive();
private:
	bool alive;
};