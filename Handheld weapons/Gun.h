#pragma once
#include "handheldWeapons.h"
using namespace std;
class Gun :public handhelpWeapon
{
	unsigned int year;
public:
	unsigned int getYear() const;
	Gun();
	void setYear(unsigned int Year);
	Gun(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accurancy, unsigned int Range, string AmmoType, string WeaponName, unsigned int Year);
	friend ostream& operator <<(ostream& out, Gun const& G);
	virtual void shoot();
	virtual void print(ostream&) override;
};