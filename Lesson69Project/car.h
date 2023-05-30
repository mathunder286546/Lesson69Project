#pragma once
#include "transport.h"

class Car
{
private:
	
	int speed;
	int power;

public:
	Car() :Transport(), speed(0), power(0) {}
	Car(int tank, int speed, int power) : Transport(tank), speed(speed), power(power) {}
	~Car() {}

	int getTank();
	int getSpeed();
	int getPower();
	void setTank(int tank);
	void setSpeed(int speed);
	void setPower(int power);
};

