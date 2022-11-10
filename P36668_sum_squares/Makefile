CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = P36668_sum_squares
all: ${OBJ}
${OBJ}: object_P36668_sum_squares
	${CC} ${CXXFLAGS} $@ $@.o
object_P36668_sum_squares:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
