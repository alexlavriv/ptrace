.PHONY: fact

CC = gcc
CFLAGS = -O0 -ggdb
OBJS = fact.o
TOBJS = trace.o

all: fact trace

fact: $(OBJS)
	$(CC) $(CFLAGS) -o fact $(OBJS)
trace: $(TOBJS)
	$(CC) $(CFLAGS) -o trace $(TOBJS)

fact.o: fact.c
trace.o: trace.c

clean:
	rm -f *~ *.o
