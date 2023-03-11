#pragma once
#include "Appliances.h"

class Microwave : virtual public Appliances
{
protected:
	int _frequency;

public:

	Microwave(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int frequency);

	void ShowSpec();

	void whoAmI();
};
