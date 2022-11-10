CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ = P59539_Harmonic
all: ${OBJ}
${OBJ}: object_P59539_Harmonic
	${CC} ${CXXFLAGS} $@ $@.o
object_P59539_Harmonic:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
