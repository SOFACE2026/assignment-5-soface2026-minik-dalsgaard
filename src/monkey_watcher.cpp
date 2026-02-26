#include "monkey_watcher.hpp"

// Implement this:

// The MonkeyWatcher is a "sink" filter that observes the monkeys flowing through the pipeline
// It stores a copies of every monkey it sees
void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys)
{
    // Add all monkeys to the log
    // We copy them so subsequent filters won't affect our stored history
    this->monkeys_seen.insert(this->monkeys_seen.end(), monkeys.begin(), monkeys.end());
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}