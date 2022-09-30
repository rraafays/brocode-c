CFLAGS = -Wall -g

all: clean build

clean:
	rm -f comments
	rm -f escapes

build:
	cc $(CFLAGS) comments.c -o comments
	cc $(CFLAGS) escapes.c -o escapes 
