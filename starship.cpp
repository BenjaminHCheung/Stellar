#include "starship.h"
#include "stellarobject.h"

Starship::Starship(int size, int attack, int defense, int speed): StellarObject(size)
{
    mAttack = attack;
    mDefense = defense;
    mSpeed = speed;
}

int Starship::get_attack()
{
    return mAttack;
}
int Starship::get_Defense()
{
    return mDefense;
}
int Starship::get_speed()
{
    return mSpeed;
}

void Starship::take_damage(int damage)
{
    mDefense = mDefense - damage;
}
