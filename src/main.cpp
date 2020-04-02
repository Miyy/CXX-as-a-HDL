#include "Module.h"
#include "SignalVector.h"
#include "Net.h"
#include "Signal.h"

#include <iostream>

class Adder : public Module
{
public:
    Adder(Signal& a, Signal& b, Signal& sum, Signal& carry)
    {
        inputs.add("a", a);
        inputs.add("b", b);

        outputs.add("sum",   sum);
        outputs.add("carry", carry);
    }

    void run()
    {
        outputs("carry") = AND(inputs("a"), inputs("b"));
        outputs("sum")   = XOR(inputs("a"), inputs("b"));
    }
};

int main()
{
    Signal a("a", true);
    Signal b("b", false);

    Signal sum("sum");
    Signal carry("carry");

    Adder a1(a, b, sum, carry);

    a1.run();

    a = false;

    a1.run();

    return 0;
}
