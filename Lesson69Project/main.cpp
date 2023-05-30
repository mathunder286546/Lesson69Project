#include "gasStation.h"

int main(void) {
	Car car1(50, 200, 1600);
	Car car2(60, 240, 2000);
	Car car3(40, 160, 1200);

	Bus bus(200, 50);

	Truck truck1(300, 20000);
	Truck truck2(350, 25000);

	Car cars[3] = { car1, car2, car3 };
	Bus buses[1] = { bus };
	Truck trucks[2] = { truck1, truck2 };

	int total = GasStation::calculateTotalGas(buses, 1, trucks, 2,
		cars, 3);

	cout << "Total fuel is " << total << endl;

	return 0;
}