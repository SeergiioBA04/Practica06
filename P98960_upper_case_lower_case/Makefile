CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = P98960_upper_case_lower_case
all: ${OBJ}
${OBJ}: object_P98960_upper_case_lower_case
	${CC} ${CXXFLAGS} $@ $@.o
object_P98960_upper_case_lower_case:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
