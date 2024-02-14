#INCLUDE_DIRS=
OUTPUT_DIR=bin/

.PHONY: all

all:
	g++ ./src/main.cpp -o ./$(OUTPUT_DIR)/main
