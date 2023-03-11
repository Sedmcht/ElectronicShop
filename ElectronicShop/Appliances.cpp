#include "Appliances.h"


Appliances::Appliances(string brand, string color, int weight, int price, int warantyYears, int powerConsumption) :
		IElectronics(brand, color, weight, price, warantyYears),
		_powerConsumption(powerConsumption) {}

 


