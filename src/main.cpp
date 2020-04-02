#include "Miy_HDL.h"

#include <iostream>

class Adder : public Module
{
public:
    Adder(Signal& a, Signal& b, Signal& sum, Signal& carry)
    {
        inputs.emplace("a", a);
        inputs.emplace("b", b);

        outputs.emplace("sum",   sum);
        outputs.emplace("carry", carry);
    }

    void run()
    {
        outputs["sum"]   = XOR(inputs["a"], inputs["b"]);
        outputs["carry"] = AND(inputs["a"], inputs["b"]);

        std::cout << (bool)inputs["a"] << " " <<
                     (bool)inputs["b"] << " " <<
                     (bool)outputs["sum"] << " " <<
                     (bool)outputs["carry"] << "\n";
    }
};

int main()
{
    Signal a(false), b(false), c(false);
    Signal x(false), y(false), z(false);

    Net n;

    Adder a1(a, b, x, n);
    Adder a2(c, n, y, z);

    a = true;
    c = true;

    a1.run();
    a2.run();

    return 0;
}
