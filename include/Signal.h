#ifndef MIY_SIGNAL
#define MIY_SIGNAL

#include <string>

class Signal
{
public:
    Signal();
    Signal(std::string name, bool value = false);
    Signal(std::string name, Signal& value);

    operator bool() const;
    operator bool*() const;
    Signal& operator=(bool value);
    Signal& operator=(Signal& signal);

    std::string getName() const;

private:
    std::string name;
    bool        *value;
};

#endif
