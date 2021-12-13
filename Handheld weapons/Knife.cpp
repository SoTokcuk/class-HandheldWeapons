#include "Knife.h"
string Knife::getMetalType() const
{
	return metalType;
}
void Knife::setMetalType(string MetalType)
{
	metalType = MetalType;
}

Knife::Knife()
{
	metalType = "";
}

Knife::Knife(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accuracy, unsigned int Range, string AmmoType, string MetalType, string WeaponName) :handhelpWeapon(Damage, ProjectVelocity, Accuracy, Range, AmmoType, WeaponName)
{
	setMetalType(MetalType);
}

void Knife::shoot()
{
	cout << "SHAK! \n";
}

ostream& operator<<(ostream& out, Knife const& K)
{
	out << "Weapon name: " << K.getWeaponName() << ";\n" << "Damage: " << K.getDamage() << ";\n" << "Type of ammunition: " << K.getAmmoType() << ";\n" << "Projectile speed: " << K.getProjectVelocity() << ";\n" << "Accurancy: " << K.getAccuracy() << ";\n" << "Range: " << K.getRange() << ".\n" << "Wood type: " << K.getMetalType() << ".\n";
	return out;
}

void Knife::print(ostream& os)
{
	os << (const handhelpWeapon&)*this << "Type of metal: " << metalType;
}