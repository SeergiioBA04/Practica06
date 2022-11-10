CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = P34279_add_one_second
all: ${OBJ}
${OBJ}: object_P34279_add_one_second
	${CC} ${CXXFLAGS} $@ $@.o
object_P34279_add_one_second:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
