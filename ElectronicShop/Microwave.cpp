#include "Microwave.h"


 

	Microwave::Microwave(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int frequency) :
		IElectronics(brand, color, weight, price, warantyYears),
		Appliances(brand, color, weight, price, warantyYears, powerConsumption),
		_frequency(frequency) {}

	void Microwave::ShowSpec()
	{
		cout << "\nBrand " << _brand << "\nColor " << _color << "\nWeight " << _weight << "g"
			<< "\nPrice " << _price << "$" << "\nWaranty " << _warantyYears << " Years" << "\nPower Consumption "
			<< _powerConsumption << "w" << "\nFrequency " << _frequency << "Mhz" << endl;
	}

	void Microwave::whoAmI()
	{
		cout << "Microwave " << _brand;
	}
 
