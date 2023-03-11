#pragma once
#include "Appliances.h"

class Grill : virtual public Appliances
{
protected:
	int _maxTemperature;

public:

	Grill(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int maxTemperature);

	void ShowSpec();

	void whoAmI();
};
