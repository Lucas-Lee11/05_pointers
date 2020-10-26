all: pointer.c
	gcc -o prgrm pointer.c

run: prgrm
	./prgrm
