#include <iostream>
#include "Crossbow.h"
#include "Knife.h"
#include "Gun.h"
using namespace std;
int main()
{
	const int size = 3;
	Knife K;
	handhelpWeapon* mas[size];
	mas[0] = new Crossbow(150, 5, 250, 1500, "arrow", "Black", "Geckoin"); //Damage - Velocity - Accuracy - Range - Ammo - Name - P
	mas[1] = new Knife(100, 50, 1000, 5, "none", "Iron", "Excalibur");
	mas[2] = new Gun(100, 200, 700, 1200, "bullet", "P250", 2007);
	for (int i = 0; i < size; i++)
	{
		cout << "Information for:" << mas[i]->getWeaponName() << endl;
		mas[i]->print(cout);
		cout << "\n \n";
		mas[i]->shoot();
		cout << "\n \n \n";
	}
	return 0;
}
