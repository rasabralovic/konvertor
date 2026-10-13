CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
SRC      = src/main.cpp src/konverzije.cpp
OUT      = build/konvertor

all: $(OUT)

$(OUT): $(SRC) src/konverzije.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -rf build

.PHONY: all run clean
