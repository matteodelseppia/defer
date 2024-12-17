CXX = g++
CXXFLAGS = --std=c++11

SRC = example.cpp
OUT = example

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(SRC) -o $(OUT) $(CXXFLAGS)

clean:
	rm -f $(OUT)

.PHONY: all clean
