CFLAGS=-Wall -g -DNDEBUG

all: gcdEuclidTest

gcdEuclidTest: gcdEuclid.o

clean:
	rm -f gcdEuclid.o gcdEuclidTest
