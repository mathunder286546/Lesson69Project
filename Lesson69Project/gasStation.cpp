#include "gasStation.h"
#include "transport.h"

int GasStation::calculateTotalGas(Transport* transport, int size) {
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += buses[i].getTank();
	}

	return total;
}
