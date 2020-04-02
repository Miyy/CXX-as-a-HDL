#ifndef MIY_NET
#define MIY_NET

#include "Signal.h"
#include "SignalVector.h"

class Net
{
public:
    operator Signal()  const;

private:
    SignalVector inputs;
    SignalVector outputs;
};

#endif
