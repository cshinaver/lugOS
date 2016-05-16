CC= gcc
CXX= g++
TESTFILES=$(wildcard tests/*.cc)
SOURCEFILES=$(wildcard src/*.c)
OBJS=$(SOURCEFILES:.c=.o)
TESTOBJS=$(TESTFILES:.cc=.o)
TESTHEADERS=-Isrc
TESTLIBS= -lgtest -lpthread
TEST_EXECUTABLE=tests/_run_tests

%.o: %.c
	${CC} -c $< -o $@

%.o: %.cc
	${CXX} -c ${TESTHEADERS} $< -o $@

${TEST_EXECUTABLE}: ${TESTOBJS} ${OBJS}
	${CXX} -o ${TEST_EXECUTABLE} ${TESTOBJS} ${OBJS} ${TESTLIBS}

test: ${TEST_EXECUTABLE}
	./${TEST_EXECUTABLE} || :

clean:
	rm ${OBJS} ${TESTOBJS} ${TEST_EXECUTABLE}
