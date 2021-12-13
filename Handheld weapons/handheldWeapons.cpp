#include "handheldWeapons.h"

handhelpWeapon::handhelpWeapon(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accuracy, unsigned int Range, string AmmoType, string WeaponName)
{
	setDamage(Damage);
	setAccuracy(Accuracy);
	setProjectVelocity(ProjectVelocity);
	setRange(Range);
	setAmmoType(AmmoType);
	setWeaponName(WeaponName);
}
handhelpWeapon::handhelpWeapon()
{
	damage = 0;
	projectVelocity = 0;
	accuracy = 0;
	range = 0;
	ammoType = "";
	weaponName = "";
}

unsigned int handhelpWeapon::getDamage() const
{
	return damage;
}

unsigned int handhelpWeapon::getProjectVelocity() const
{
	return projectVelocity;
}

unsigned int handhelpWeapon::getAccuracy() const
{
	return accuracy;
}

unsigned int handhelpWeapon::getRange() const
{
	return range;
}

string handhelpWeapon::getAmmoType() const
{
	return ammoType;
}

string handhelpWeapon::getWeaponName() const
{
	return weaponName;
}

void handhelpWeapon::setDamage(unsigned int Damage)
{
	damage = Damage;
}

void handhelpWeapon::setProjectVelocity(unsigned int ProjectVelocity)
{
	projectVelocity = ProjectVelocity;
}

void handhelpWeapon::setAccuracy(unsigned int Accuracy)
{
	accuracy = Accuracy;
}

void handhelpWeapon::setRange(unsigned int Range)
{
	range = Range;
}

void handhelpWeapon::setAmmoType(string AmmoType)
{
	ammoType = AmmoType;
}

void handhelpWeapon::setWeaponName(string WeaponName)
{
	weaponName = WeaponName;
}

ostream& operator<<(ostream& out, handhelpWeapon const& W)
{
	out << "Weapon name: " << W.getWeaponName() << ";\n" << "Damage: " << W.getDamage() << ";\n" << "Type of ammunition: " << W.getAmmoType() << ";\n" << "Projectile speed: " << W.getProjectVelocity() << ";\n" << "Accurancy: " << W.getAccuracy() << ";\n" << "Range: " << W.getRange() << ".\n";
	return out;
}

void handhelpWeapon::print(ostream& os)
{
	os << "Weapon name: " << weaponName << ";\n" << "Damage: " << damage << ";\n" << "Type of ammunition: " << ammoType << ";\n" << "Projectile speed: " << projectVelocity << ";\n" << "Accurancy: " << accuracy << ";\n" << "Range: " << range << ".\n";
}