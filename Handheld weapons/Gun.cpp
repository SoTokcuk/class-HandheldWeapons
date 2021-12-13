#include "Gun.h"
unsigned int Gun::getYear() const
{
	return year;
}
void Gun::setYear(unsigned int Year)
{
	year = Year;
}

Gun::Gun()
{
	year = 0;
}

Gun::Gun(unsigned int Damage, unsigned int ProjectVelocity, unsigned int Accuracy, unsigned int Range, string AmmoType, string WeaponName, unsigned int Year) :handhelpWeapon(Damage, ProjectVelocity, Accuracy, Range, AmmoType, WeaponName)
{
	setYear(Year);
}

void Gun::shoot()
{
	cout << "Bang! \n";
}

ostream& operator<<(ostream& out, Gun const& G)
{
	out << "Weapon name: " << G.getWeaponName() << ";\n" << "Damage: " << G.getDamage() << ";\n" << "Type of ammunition: " << G.getAmmoType() << ";\n" << "Projectile speed: " << G.getProjectVelocity() << ";\n" << "Accurancy: " << G.getAccuracy() << ";\n" << "Range: " << G.getRange() << ".\n" << "Wood type: " << G.getYear() << ".\n";
	return out;
}

void Gun::print(ostream& os)
{
	os << (const handhelpWeapon&)*this << "Year: " << year;
}