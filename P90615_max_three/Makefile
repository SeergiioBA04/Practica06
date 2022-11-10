CC = g++
CXXFLAGS = -std=c++14 -Wall -o
OBJ =  P90615_max_three
all: ${OBJ}
${OBJ}: object_P90615_max_three
	${CC} ${CXXFLAGS} $@ $@.o
object_P90615_max_three:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
