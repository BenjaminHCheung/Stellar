#ifndef STARSHIP_H
#define STARSHIP_H

#include "stellarobject.h"

class Starship: public StellarObject
{
public:
    Starship(PositionNodes* position, int size, int attack, int defense, int speed);

    int get_attack();
    int get_Defense();
    int get_speed();

    void take_damage(int damage);

private:
    int mAttack;
    int mDefense;
    int mSpeed;
};

#endif // STARSHIP_H
