objects := foo.o bar.o all.o

all:$(objects)

foo.o:foo.c 
bar.o:bar.c 
all.o:all.c 


%.c:
	touch $@

all.c:
	echo "int main() { return 0; }" > all.c



clean:
	rm -f *.c *.o all