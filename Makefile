CXX= g++
TESTFILES=$(wildcard tests/*.cc)
TESTOBJS=$(TESTFILES:.cc=.o)
TESTLIBS= -lgtest -lpthread
TEST_EXECUTABLE=tests/_run_tests

%.o: %.cc
	${CXX} -c $< -o $@

test: ${TESTOBJS}
	${CXX} -o ${TEST_EXECUTABLE} ${TESTOBJS} ${TESTLIBS}
	./${TEST_EXECUTABLE} || :
