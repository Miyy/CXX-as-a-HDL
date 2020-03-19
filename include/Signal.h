#ifndef MIY_SIGNAL
#define MIY_SIGNAL

class Signal
{
public:
    Signal();

    operator bool() const;
    Signal& operator=(bool val);

    bool value;
};


class Input : public Signal
{
public:
    Input& operator=(bool val);
};


class Output : public Signal
{
public:
    Output& operator=(bool val);
};

#endif
