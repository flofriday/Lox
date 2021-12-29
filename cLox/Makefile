CC = clang
CFLAGS = -Wall -fdiagnostics-color=always
#LDFLAGS = -F/System/Library/PrivateFrameworks -framework Apple80211

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

all: clox

clox: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o clox