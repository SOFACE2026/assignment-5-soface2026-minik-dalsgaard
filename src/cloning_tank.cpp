#include "cloning_tank.hpp"

// Implement this:

// The CloningTank filter clones each monkey that goes through
// It adds a copy of every monkey currently in the vector, resulting in double the amount of monkeys
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{
    // Take a copy of the current monkeys to avoid iterating over newly added clones
    const std::vector<Monkey> originals = monkeys;

    // Add a clone of each original monkey
    monkeys.insert(monkeys.end(), originals.begin(), originals.end());
}