all:
	gcc -Iinclude src/can_parser.c -o can_parser
clean:
	rm -f can_parser
