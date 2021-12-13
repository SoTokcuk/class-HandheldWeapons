#pragma once
#include "handheldWeapons.h"
using namespace std;
class Knife :public handhelpWeapon
{
	string metalType;
public:
	string getMetalType() const;
	Knife();
	void setMetalType(string WoodType);
	Knife(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accurancy, unsigned int Range, string AmmoType, string WeaponName, string MetalType);
	friend ostream& operator <<(ostream& out, Knife const& C);
	virtual void shoot();
	virtual void print(ostream&) override;
};