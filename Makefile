CC=gcc
CFLAGS=-lcurl -Wall

all:
	$(CC) -c CCurl.c $(CFLAGS)
	$(CC) -c CCurl_simple.c $(CFLAGS)
examples:
	$(CC) -c examples_src/example.c $(CFLAGS)
	$(CC) -c examples_src/example_s.c $(CFLAGS)
	$(CC) -o example example.o CCurl.o $(CFLAGS)
	$(CC) -o example_s example_s.o CCurl_simple.o $(CFLAGS)
clean:
	rm *.o
