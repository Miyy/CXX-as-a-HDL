SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp,bin/%.o,$(SRC))
LIB = lib/Miy_HDL.a

LDFLAGS     = $(LIB)
CXXFLAGS    = -I ./include
CXXLIBFLAGS = -I ./lib/include

CXX = g++

hdl.exe: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

bin/%.o: src/%.cpp
	$(CXX) -o $@ -c $^ $(CXXFLAGS)

all: hdl.exe
	hdl.exe

debug: hdl.exe
	gdb hdl.exe

lib: $(LIB)

lib/Miy_HDL.a: lib/bin/Module.o lib/bin/Net.o lib/bin/Signal.o
	ar rvs $@ $^

lib/bin/%.o: lib/src/%.cpp
	$(CXX) -o $@ -c $^ $(CXXLIBFLAGS)
