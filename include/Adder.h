#ifndef MIY_ADDER
#define MIY_ADDER

#include "Circuit.h"
#include "Signal.h"

class Adder : public Circuit
{
public:
    Adder();

    void run();

protected:
    Input a;
    Input b;

    Output sum;
    Output carry;
};

#endif
