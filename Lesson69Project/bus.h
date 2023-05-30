#pragma once
#include "transport.h"

class Bus
{
private:
	int number;

public:
	Bus() :transports(0), number(0) {}
	Bus(int tank, int number) : Transport(tank), number(number) {}
	~Bus() {}

	int getTank();
	int getNumber();
	void setTank(int tank);
	void setNumber(int number);
};

