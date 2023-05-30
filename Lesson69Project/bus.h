#pragma once
#include "main.h"

class Bus
{
private:
	int tank;
	int number;

public:
	Bus() :tank(0), number(0) {}
	Bus(int tank, int number) : tank(tank), number(number) {}
	~Bus() {}

	int getTank();
	int getNumber();
	void setTank(int tank);
	void setNumber(int number);
};

