#ifndef MIY_MODULE
#define MIY_MODULE

#include "Signal.h"
#include "SignalVector.h"

class Module
{
public:
    virtual void run() = 0;
    void test();

protected:
    SignalVector inputs;
    SignalVector outputs;

    bool NOT (bool a);
    bool AND (bool a, bool b);
    bool OR  (bool a, bool b);
    bool NAND(bool a, bool b);
    bool NOR (bool a, bool b);
    bool XOR (bool a, bool b);
};

#endif
