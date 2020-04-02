#ifndef MIY_NET
#define MIY_NET

#include "Signal.h"

#include <map>
#include <string>

class Net
{
public:
    operator Signal&();

private:
    Signal value;
};

#endif
