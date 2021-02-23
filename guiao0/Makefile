CC = gcc
CFlags = -02 -Wall

main: main.o
	$(CC) $(CFLAGS) -o $@ $^

run: main
	./main

clean:
	@rm main *.o
