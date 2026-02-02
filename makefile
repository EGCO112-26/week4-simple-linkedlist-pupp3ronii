compile: main.c 
	 gcc main.c -o puppy

run: puppy
	 ./puppy

clean: puppy
	 rm puppy
