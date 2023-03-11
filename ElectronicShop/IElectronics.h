#pragma once
#include <string>
#include <iostream>

using namespace std;

class IElectronics
{



protected:

	string _brand;
	string _color;
	int _weight;
	int _price;
	int _warantyYears;

public:

	IElectronics(string& brand, string& color, int& weight, int& price, int& warantyYears);

	virtual ~IElectronics() = default;

	virtual void ShowSpec() = 0;

	virtual void whoAmI() = 0;
};

