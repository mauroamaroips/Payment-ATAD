default:
	gcc -Wall -o prog main.c input.c -lm
debug:
	gcc -Wall -o prog -g main.c input.c -lm
clean:
	rm -f prog
