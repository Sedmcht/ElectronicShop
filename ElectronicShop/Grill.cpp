#include "Grill.h"
 

	Grill::Grill(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int maxTemperature) :
		IElectronics(brand, color, weight, price, warantyYears),
		Appliances(brand, color, weight, price, warantyYears, powerConsumption),
		_maxTemperature(maxTemperature) {}

	void Grill::ShowSpec()
	{
		cout << "\nBrand " << _brand << "\nColor " << _color << "\nWeight " << _weight << "g"
			<< "\nPrice " << _price << "$" << "\nWaranty " << _warantyYears << " Years" << "\nPower Consumption "
			<< _powerConsumption << "w" << "\nMax Temperature " << _maxTemperature << "c" << endl;
	}

	void Grill::whoAmI()
	{
		cout << "Grill " << _brand;
	}
