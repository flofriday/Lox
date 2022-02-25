CC = clang
CFLAGS = -g -Wall -fdiagnostics-color=always -O3 
#LDFLAGS = -F/System/Library/PrivateFrameworks -framework Apple80211

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

all: clox

repl: clox
	./clox

clox: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o clox