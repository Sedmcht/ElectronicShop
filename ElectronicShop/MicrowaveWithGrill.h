#pragma once
#include "Microwave.h"
#include "Grill.h"

class MicrowaveWithGrill : public Microwave, Grill
{
public:

	MicrowaveWithGrill(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int frequency, int maxTemperature);

	void ShowSpec();

	void whoAmI();
};

