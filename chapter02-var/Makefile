.PHONY: clean start

SERVER=var.c
CC=gcc

start: build
	@./server
build:
	@$(CC) $(SERVER) -o server -Wall

clean:
	@rm server|true

