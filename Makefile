CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = name
all: ${OBJ}
${OBJ}: object_name
	${CC} ${CXXFLAGS} $@ $@.o
object_name:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
