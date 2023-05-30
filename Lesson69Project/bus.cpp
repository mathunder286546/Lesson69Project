#include "bus.h"

int Bus::getTank() {
	return tank;
}

int Bus::getNumber() {
	return number;
}

void Bus::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}

void Bus::setNumber(int number) {
	if (number > 0) {
		this->number = number;
	}
}