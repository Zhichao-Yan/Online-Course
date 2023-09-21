objects := foo.o bar.o all.o

all:$(objects)

$(objecs):%.o:%.c 

all.c:
	echo "int main() { return 0; }" > all.c

%.c:
	touch $@

clean:
	rm -f *.c *.o all