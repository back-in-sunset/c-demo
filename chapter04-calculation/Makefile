.PHONY: clean start

SERVER=calcu.c

start: build
	@./server
build:
	@gcc $(SERVER) -o server -Wall

clean:
	@rm server|true

