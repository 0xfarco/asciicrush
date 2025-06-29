CC = gcc
CFLAGS = -Iinclude/
LDFLAGS = -Llib/ -l:libraylib.a -lm
SRC = main.c
OUT = main

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -f $(OUT)

