#include "Phone.h"


	Phone::Phone(string brand, string color, int weight, int price, int warantyYears, int batteryMah, int phoneNumbers) :
		IElectronics(brand, color, weight, price, warantyYears),
		Device(brand, color, weight, price, warantyYears, batteryMah),
		_phoneNumbers(phoneNumbers) {}

	void Phone::ShowSpec()
	{
		cout << "\nBrand " << _brand << "\nColor " << _color << "\nWeight " << _weight << "g"
			<< "\nPrice " << _price << "$" << "\nWaranty " << _warantyYears << " Years" << "\nBattery "
			<< _batteryMah << "mah" << "\nPhone memory " << _phoneNumbers << " Contacts" << endl;
	}

	void Phone::whoAmI()
	{
		cout << "Phone " << _brand;
	}
 
