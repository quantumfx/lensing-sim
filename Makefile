# makefile
CXX = g++
CXXFLAGS = -std=c++17 -O2
OBJS = main.o signal.o
DEPS = signal.o
EXEC = lensing
LDLIBS = 

## all:
all: ${EXEC}

${EXEC}: ${OBJS}
	${CXX} -o $@ $^ ${LDLIBS}

%.o: %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@ ${LDLIBS}

main.o: ${DEPS}

clean:
	rm -f ${EXEC} ${OBJS}

help: Makefile

.PHONY: clean all
