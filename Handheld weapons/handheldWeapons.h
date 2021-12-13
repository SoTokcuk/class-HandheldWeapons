#pragma once
#include <iostream>
#include<ostream>
using namespace std;
class handhelpWeapon
{
private:
	unsigned int damage;
	unsigned int projectVelocity;
	unsigned int accuracy;
	unsigned int range;
	string ammoType;
	string weaponName;
public:
	handhelpWeapon();
	unsigned int getDamage() const;
	unsigned int getProjectVelocity() const;
	unsigned int getAccuracy() const;
	unsigned int getRange() const;
	string getAmmoType() const;
	string getWeaponName() const;
	void setDamage(unsigned int Damage);
	void setProjectVelocity(unsigned int ProjectVelocity);
	void setAccuracy(unsigned int Accuracy);
	void setRange(unsigned int Range);
	void setAmmoType(string AmmoType);
	void setWeaponName(string WeaponName);
	handhelpWeapon(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accuracy, unsigned int Range, string AmmoType, string WeaponName);
	friend ostream& operator <<(ostream& out, handhelpWeapon const& C);
	virtual void shoot() = 0;
	virtual void print(ostream&);
};