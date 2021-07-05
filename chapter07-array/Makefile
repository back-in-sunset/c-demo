.PHONY: clean start

OBJ=$(wildcard *.c)
CC=gcc
FLAGS=-ggdb3 -O0 -Wall -Werror

start: server
	@./server

build-linux:$(OBJ)
	$(CC) -o app $^ 

server:$(OBJ)
	@$(CC) -o $@ $^ $(FLAGS)

clean:
	@rm server app 2>&1 | true

