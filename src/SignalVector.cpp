#include "SignalVector.h"
#include "Signal.h"

#include <string>

void SignalVector::add(std::string name, Signal& value)
{
    Signal signal(name, value);
    push_back(signal);
}

Signal& SignalVector::operator()(const std::string name)
{
    for (SignalVector::iterator it = begin(); it != end(); it++) {
        if ((*it).getName() == name) {
            return *it;
        }
    }

    return *(begin());
}
