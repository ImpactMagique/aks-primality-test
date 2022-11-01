CC =gcc
CFLAGS = -std=c99 -pedantic -Wall -Wvla -Wextra -Werror
OBJ = src/aks.o
TEST_OBJ = tests/test.o
MAIN_OBJ = src/main.o
TESTSUITE = test
BIN = aks

all: aks

aks: $(OBJ) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $^ -o $@

check: LDFLAGS += -lcriterion
check: CFLAGS += -lcriterion
check: $(TESTSUITE)
$(TESTSUITE): $(OBJ) $(TEST_OBJ)
	$(CC) $(LDFLAGS) $? -o $@
	./$(TESTSUITE)

clean:
	$(RM) $(OBJ) $(MAIN_OBJ) $(BIN) $(TEST_OBJ) $(TESTSUITE)
