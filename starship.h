#ifndef STARSHIP_H
#define STARSHIP_H


class Starship
{
public:
    Starship();

    int get_size();
    int get_attack();
    int get_Defense();
    int get_speed();

    void take_damage(int damage);

private:
    int mSize;
    int mAttack;
    int mDefense;
    int mSpeed;
};

#endif // STARSHIP_H
