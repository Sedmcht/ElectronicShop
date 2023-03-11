#include "MicrowaveWithGrill.h"
 
	MicrowaveWithGrill::MicrowaveWithGrill(string brand, string color, int weight, int price, int warantyYears, int powerConsumption, int frequency, int maxTemperature) :
		IElectronics(brand, color, weight, price, warantyYears), Appliances(brand, color, weight, price, warantyYears, powerConsumption),
		Microwave(brand, color, weight, price, warantyYears, powerConsumption, frequency),
		Grill(brand, color, weight, price, warantyYears, powerConsumption, maxTemperature) {}


	void MicrowaveWithGrill::ShowSpec()
	{
		cout << "\nBrand " << _brand << "\nColor " << _color << "\nWeight " << _weight << "g"
			<< "\nPrice " << _price << "$" << "\nWaranty " << _warantyYears << " Years" << "\nPower Consumption "
			<< _powerConsumption << "w" << "\nMax Temperature " << _maxTemperature << "c"
			<< "\nFrequency " << _frequency << "Mhz" << endl;
	}

	void MicrowaveWithGrill::whoAmI()
	{
		cout << "MicrowaveWithGrill " << _brand;
	}
