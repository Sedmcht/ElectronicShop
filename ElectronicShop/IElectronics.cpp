#include "IElectronics.h"

IElectronics::IElectronics(string& brand, string& color, int& weight, int& price, int& warantyYears) :
	_brand(brand), _color(color), _weight(weight), _price(price), _warantyYears(warantyYears) {}