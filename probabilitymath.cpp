#include "probabilitymath.h"

double calculate_hit_probability(Starship* attacker, Starship* defender)
{
    double distance{4.5};
    return defender->get_size()/distance;
}
