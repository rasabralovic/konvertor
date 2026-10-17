CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
SRC      = src/main.cpp src/konverzije.cpp
OUT      = build/konvertor
TEST_SRC = tests/test_konverzije.cpp src/konverzije.cpp
TEST_OUT = build/testi

all: $(OUT)

$(OUT): $(SRC) src/konverzije.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: $(OUT)
	./$(OUT)

$(TEST_OUT): $(TEST_SRC) src/konverzije.h
	mkdir -p build
	$(CXX) $(CXXFLAGS) -Isrc -Iexternal/doctest $(TEST_SRC) -o $(TEST_OUT)

test: $(TEST_OUT)
	./$(TEST_OUT)

clean:
	rm -rf build

.PHONY: all run test clean
