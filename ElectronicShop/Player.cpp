#include "Player.h"

 

	Player::Player(string brand, string color, int weight, int price, int warantyYears, int batteryMah, int totalTracks) :
		IElectronics(brand, color, weight, price, warantyYears),
		Device(brand, color, weight, price, warantyYears, batteryMah),
		_totalTracks(totalTracks) {}



	void Player::ShowSpec()
	{
		cout << "\nBrand " << _brand << "\nColor " << _color << "\nWeight " << _weight << "g"
			<< "\nPrice " << _price << "$" << "\nWaranty " << _warantyYears << " Years" << "\nBattery "
			<< _batteryMah << "mah" << "\nTotal Tracks " << _totalTracks << endl;
	}

	void Player::whoAmI()
	{
		cout << "Player " << _brand;
	}
 