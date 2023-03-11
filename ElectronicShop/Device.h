#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
protected:
	int _batteryMah;

public:

	Device(string brand, string color, int weight, int price, int warantyYears, int batteryMah);

	void ShowSpec() = 0;
	
};

