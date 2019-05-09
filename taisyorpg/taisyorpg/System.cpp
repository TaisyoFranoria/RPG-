#include"System.hpp"

System::System() {
	alive = true;
}

System::~System() {

}

void System::ALL() {
	alive = false;
}

bool System::getAlive() {
	return alive;
}