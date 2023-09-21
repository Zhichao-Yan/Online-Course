blah:blah.o
	gcc -o blah blah.o
blah.o:blah.c
	gcc -c blah.c -o blah.o
blah.c:
	echo "int main() { return 0; }" > blah.c
clean:
	rm -f blah.c blah.o blah