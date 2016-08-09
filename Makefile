CC = gcc
CFLAGS = -Wall -g -std=c99

MAIN_OBJECTS := $(patsubst src/%.c,src/%.o,$(wildcard src/*.c))
TEST_OBJECTS := $(patsubst test/%.c,test/%.o,$(wildcard test/*.c))

TARGET = out

.PHONY: check compile test-compile create-target-dir clean

check: test-compile
	$(TARGET)/check-roman

compile: $(MAIN_OBJECTS) create-target-dir
	${CC} ${CFLAGS} -o $(TARGET)/roman-calculator $(MAIN_OBJECTS)

test-compile: compile $(TEST_OBJECTS) create-target-dir
	${CC} ${CFLAGS} -o $(TARGET)/check-roman $(filter-out src/main.o, $(MAIN_OBJECTS)) $(TEST_OBJECTS) `pkg-config --cflags --libs check`

create-target-dir:
	@mkdir -p $(TARGET)

clean:
	@rm -rf $(TARGET)
	@rm -rf src/*.o test/*.o

