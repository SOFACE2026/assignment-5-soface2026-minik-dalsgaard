#include "feeder.hpp"

// Implement this:

// The Feeder filter "transforms" the data by reducing the hunger level of each monkey that goes through
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{
    for (Monkey &m : monkeys) // Go through all monkeys
    {
        // Decrease hunger level by -1
        m.hunger_level -= 1;
    }
}