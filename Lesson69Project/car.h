#pragma once
#include "main.h"

class Car
{
private:
	int tank;
	int speed;
	int power;

public:
	Car() :tank(0), speed(0), power(0) {}
	Car(int tank, int speed, int power) : tank(tank), speed(speed), power(power) {}
	~Car() {}

	int getTank();
	int getSpeed();
	int getPower();
	void setTank(int tank);
	void setSpeed(int speed);
	void setPower(int power);
};

