#include "Module.h"

#include <iostream>
#include <math.h>

void Module::test()
{
    if (inputs.size() <= 64) {
        for (auto it = inputs.begin(); it != inputs.end(); it++) {
            std::cout << (it->first) << " ";
        }

        std::cout << "\t";

        for (auto it = outputs.begin(); it != outputs.end(); it++) {
            std::cout << (it->first) << " ";
        }

        std::cout << "\n";

        for (unsigned long long i = 0; i < pow(2, inputs.size()); i++) {
            unsigned long long k   = i;
            int                mod = 2;

            for (auto it = inputs.begin(); it != inputs.end(); it++) {
                if (k % mod == 1) {
                    std::cout << 1 << " ";
                    it->second = true;
                } else {
                    std::cout << 0 << " ";
                    it->second = false;
                }
                k /= mod;
            }

            run();

            std::cout << "\t";

            for (auto it = outputs.begin(); it != outputs.end(); it++) {
                std::cout << (bool)(it->second) << " ";
            }

            std::cout << "\n";
        }
    } else {
        std::cout << "--Number of inputs is bigger than 64.--";
    }
}



bool Module::NOT(bool a)
{
    return !a;
}



bool Module::AND(bool a, bool b)
{
    return (a && b);
}



bool Module::OR(bool a, bool b)
{
    return (a || b);
}



bool Module::NAND(bool a, bool b)
{
    return NOT(AND(a, b));
}



bool Module::NOR(bool a, bool b)
{
    return NOT(OR(a, b));
}



bool Module::XOR(bool a, bool b)
{
    return (a != b);
}
