#include <iostream>
#include <string>
#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "Player.h"
#include "Phone.h"
#include "Microwave.h"
#include "Grill.h"
#include "MicrowaveWithGrill.h"

using namespace std;

int main()
{
	IElectronics* ElectronicShop[10];

	ElectronicShop[0] = new Player(string("Sony"), string("Black"), 200, 100, 5, 1000, 2000);
	ElectronicShop[1] = new Player(string("Ritmix"), string("Red"), 150, 30, 3, 800, 1000);
	ElectronicShop[2] = new Phone(string("Nokia"), string("Blue"), 150, 70, 3, 1000, 800);
	ElectronicShop[3] = new Phone(string("Samsung"), string("White"), 200, 300, 3, 3000, 10000);
	ElectronicShop[4] = new Microwave(string("Electrolux"), string("White"), 4000, 350, 3, 1500, 2400);
	ElectronicShop[5] = new Microwave(string("LG"), string("Black"), 4100, 320, 3, 1400, 2400);
	ElectronicShop[6] = new Grill(string("Samsung"), string("Red"), 5100, 330, 3, 2000, 300);
	ElectronicShop[7] = new Grill(string("Electrolux"), string("Blue"), 4900, 450, 3, 2100, 300);
	ElectronicShop[8] = new MicrowaveWithGrill(string("Bosh"), string("Black"), 5000, 500, 10, 2000, 2400, 300);
	ElectronicShop[9] = new MicrowaveWithGrill(string("LG"), string("Yellow"), 6000, 600, 9, 1900, 2400, 310);

	bool open = true;
	while (open)
	{
		cout << endl << "Choose the product id or 0 to exit :" << endl;

		int index = 1;
		for (auto &item : ElectronicShop)
		{
			cout << index++ << ": ";
			item->whoAmI();
			cout << endl;
		}

		int choice;
		cin >> choice;
		
		if (choice > 0 && choice < index)
			ElectronicShop[choice - 1]->ShowSpec();
		else if (choice == 0)
			break;

	}


	for (auto &item : ElectronicShop)
		delete item;
		
	
}
