.PHONY: clean start

OBJ=$(wildcard *.c)
CC=gcc

start: server
	@./server

server:$(OBJ)
	@$(CC) -o $@ $^ -Wall

clean:
	@rm server 2>&1 | true

