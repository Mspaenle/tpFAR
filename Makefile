# Makefile

GCC=gcc
FILES=client.c serveur.c
OBJ=$(FILES:%.c=%.o)
BIN=client serveur

all: $(OBJ)
	$(GCC) -o client client.o
	$(GCC) -o serveur serveur.o

clean:
	rm -f *~ *.o $(BIN)

.SUFFIXES: .c .o

.zf.res:
	$(GCC) -c $<
