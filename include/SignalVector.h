#ifndef MIY_SIGNALVECTOR
#define MIY_SIGNALVECTOR

#include "Signal.h"

#include <vector>
#include <string>

class SignalVector : std::vector<Signal>
{
public:
    void add(std::string name, Signal& value);
    Signal& operator()(const std::string name);
};

#endif
