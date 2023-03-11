#include "Device.h"

 

Device::Device(string brand, string color, int weight, int price, int warantyYears, int batteryMah) :
		IElectronics(brand, color, weight, price, warantyYears),
		_batteryMah(batteryMah) {}






