#pragma once
#include "Device.h"
class Phone : public Device
{
	int _phoneNumbers;

public:

	Phone(string brand, string color, int weight, int price, int warantyYears, int batteryMah, int phoneNumbers);

	void ShowSpec();

	void whoAmI();
};


