#include "Miy_HDL.h"

//#include <iostream>

class Adder : public Module
{
public:
    Adder(Signal& a, Signal& b, Signal& sum, Signal& carry)
    {
        inputs["a"] = a;
        inputs["b"] = b;

        outputs["sum"]   = sum;
        outputs["carry"] = carry;
    }

    void run()
    {
        outputs["sum"]   = XOR(inputs["a"], inputs["b"]);
        outputs["carry"] = AND(inputs["a"], inputs["b"]);
    }
};

int main()
{
    Signal a(false), b(false), c(false), d(false);

    Adder a1(a, b, c, d);

    a1.test();

    return 0;
}
