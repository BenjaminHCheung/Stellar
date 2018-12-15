#include "probabilitymath.h"
#include <math.h>

double calculate_distance(Starship* attacker, Starship* defender)
{
    double differenceInX{attacker->get_position_node()->get_position().get_x_value()
                        - defender->get_position_node()->get_position().get_x_value()};
    double differenceInY{attacker->get_position_node()->get_position().get_y_value()
                        - defender->get_position_node()->get_position().get_y_value()};
    double differenceInZ{attacker->get_position_node()->get_position().get_z_value()
                        - defender->get_position_node()->get_position().get_z_value()};

    double distance{sqrt(pow(differenceInX, 2) + pow(differenceInY, 2) + pow(differenceInZ, 2))};
    return distance;
}

double chance_to_hit(Starship* attacker, Starship* defender)
{
    double distance{calculate_distance(attacker, defender)};
    int size{defender->get_size()};

    double chanceToHit{(size * 3)/(distance * log(distance))};
    if(chanceToHit > 1)
    {
        chanceToHit = 1;
    }
    return chanceToHit;
}
