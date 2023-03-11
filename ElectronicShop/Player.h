#pragma once
#include "Device.h"

class Player : public Device
{
	int _totalTracks;

public:

	Player(string brand, string color, int weight, int price, int warantyYears, int batteryMah, int totalTracks);



	void ShowSpec();

	void whoAmI();
};

