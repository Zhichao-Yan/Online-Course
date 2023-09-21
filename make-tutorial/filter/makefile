obj_files := foo.result bar.o lose.o 
src_files := foo.raw bar.c lose.c 

all:$(obj_files)
.PHONY:all

$(filter %.o,$(obj_files)):%.o:%.c 
	@echo "targets:$@ prerequisite:$<"

$(filter %.result,$(obj_files)):%.result:%.raw
	@echo "targets:$@ prerequisite:$<"

%.c %.raw:
	touch $@

clean:
	rm $(src_files)