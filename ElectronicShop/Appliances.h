#pragma once
#include "IElectronics.h"
class Appliances : virtual public IElectronics
{
protected:

	int _powerConsumption;

public:

	Appliances(string brand, string color, int weight, int price, int warantyYears, int powerConsumption);

	void ShowSpec() = 0;
};