#include"transport.h"

int Transport::getTank() {
	return tank;
}
void Transport::setTank() {
	if (tank > 0) {
		this->tank = tank;
	}

}
