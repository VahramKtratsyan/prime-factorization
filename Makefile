SOURCE_DIR = src
BUILD_DIR = build
TEST_DIR = test
CFLAGS = -g -Wall -Wextra -Wpedantic -I$(SOURCE_DIR)
STD = -std=c++20

all: $(BUILD_DIR)/test

$(BUILD_DIR)/test: $(BUILD_DIR)/primeFactorize.o $(BUILD_DIR)/test.o
	clang++ $(CFLAGS) $(BUILD_DIR)/primeFactorize.o $(BUILD_DIR)/test.o -o $(BUILD_DIR)/test -lgtest -lgtest_main -lpthread

$(BUILD_DIR)/primeFactorize.o: $(SOURCE_DIR)/primeFactorize.cpp
	clang++ $(STD) -c $(CFLAGS) $(SOURCE_DIR)/primeFactorize.cpp -o $(BUILD_DIR)/primeFactorize.o

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
	clang++ $(STD) -c $(CFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/test

.PHONY: all clean