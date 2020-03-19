SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp,bin/%.o,$(SRC))

CXXFLAGS = -I ./include

CXX = g++

hdl: $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

bin/%.o: src/%.cpp
	$(CXX) -o $@ -c $^ $(CXXFLAGS)

all: hdl
	hdl.exe
	make clean

.PHONY: clean
clean:
	del $(wildcard *.exe)
