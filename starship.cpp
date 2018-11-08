#include "starship.h"

Starship::Starship()
{

}

int Starship::get_size()
{
    return mSize;
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
