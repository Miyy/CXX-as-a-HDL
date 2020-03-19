#ifndef MIY_CIRCUIT
#define MIY_CIRCUIT

#include "Signal.h"

class Circuit
{
public:
    Circuit();

    void test();
    virtual void run() = 0;

protected:
    int nInputs;
    int nOutputs;

    Input  **inputs;
    Output **outputs;

    bool NOT (bool a);
    bool AND (bool a, bool b);
    bool OR  (bool a, bool b);
    bool NAND(bool a, bool b);
    bool NOR (bool a, bool b);
    bool XOR (bool a, bool b);
};

#endif
