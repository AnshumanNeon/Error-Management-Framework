GCC_FLAGS=-std=c++11
INCLUDE_DIRS=-I./
OUTPUT_DIR=bin/

.PHONY: all

all:
	g++ $(GCC_FLAGS) ./test/test1.cpp $(INCLUDE_DIRS) -o ./$(OUTPUT_DIR)/main
