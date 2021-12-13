#pragma once
#include "handheldWeapons.h"
using namespace std;
class Crossbow:public handhelpWeapon
{
	string woodType;
public:
	string getWoodType() const;
	Crossbow();
	void setWoodType(string WoodType);
	Crossbow(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accurancy, unsigned int Range, string AmmoType, string WeaponName, string WoodType);
	friend ostream& operator <<(ostream& out, Crossbow const& C);
	virtual void shoot();
	virtual void print(ostream&) override;
};