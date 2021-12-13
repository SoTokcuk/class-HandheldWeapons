#include "Crossbow.h"
string Crossbow::getWoodType() const
{
	return woodType;
}
void Crossbow::setWoodType(string WoodType)
{
	woodType = WoodType;
}

Crossbow::Crossbow()
{
	woodType = "";
}

Crossbow::Crossbow(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accuracy, unsigned int Range, string AmmoType, string WoodType, string WeaponName) :handhelpWeapon(Damage, ProjectVelocity, Accuracy, Range, AmmoType, WeaponName)
{
	setWoodType(WoodType);
}

void Crossbow::shoot()
{
	cout << "POW! \n";
}

ostream& operator<<(ostream& out, Crossbow const& C)
{
	out << "Weapon name: " << C.getWeaponName() << ";\n" << "Damage: " << C.getDamage() << ";\n" << "Type of ammunition: " << C.getAmmoType() << ";\n" << "Projectile speed: " << C.getProjectVelocity() << ";\n" << "Accurancy: " << C.getAccuracy() << ";\n" << "Range: " << C.getRange() << ".\n" << "Wood type: " << C.getWoodType() << ".\n";
	return out;
}

void Crossbow::print(ostream& os)
{
	os << (const handhelpWeapon&)*this << "Type of wood: " << woodType;
}