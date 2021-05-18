.PHONY: clean start

SERVER=char.c
CC=gcc

start: build
	@./server
build:
	@$(CC) $(SERVER) -o server -Wall

clean:
	@rm server|true

