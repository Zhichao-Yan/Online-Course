.PHONY: all


# # Pattern-specific variables
# %.c: one = cool
# blah.c: 
# 	echo one is defined: $(one)
# other:
# 	echo one is nothing: $(one)


# # test Target-specific variables
# all: one = cool
# all: 
# 	echo one is defined: $(one)
# other:
# 	echo one is nothing: $(one)


# # test define and endef
# one = export blah="I was set!"; echo $$blah
# define two
# export blah="I was so set!";echo $$blah
# endef
# all: 
# 	@echo "This prints 'I was set'"
# 	@$(one)
# 	@echo "This does not print 'I was set' because each command runs in a separate shell"
# 	@$(two)

# # test recursive = will go wrong
# one = hello
# one = ${one} there
# all: 
# 	echo $(one)

# # test := 
# one = hello
# # one gets defined as a simply expanded variable (:=) and thus can handle appending
# one := ${one} there
# all: 
# 	echo $(one)

# # test := and =
# # Recursive variable. This will print "later" below
# one = one ${later_variable}
# # Simply expanded variable. This will not print "later" below
# two := two ${later_variable}
# later_variable = later
# all: 
# 	echo $(one)
# 	echo $(two)


# # test ?= 
# one = hello
# one ?= will not be set
# two ?= will be set
# all: 
# 	echo $(one)
# 	echo $(two)



# # test nullstring
# with_spaces = hello   # with_spaces has many spaces after "hello"
# after = $(with_spaces)there
# nullstring =
# space = $(nullstring) # Make a variable with a single space.
# all: 
# 	echo "$(after)"
# 	echo start"$(space)"end

# # test undefine varible
# all: 
# 	echo $(nowhere)

# # test .phony
# some_file:
# 	touch some_file
# 	touch clean
# .PHONY: clean
# clean:
# 	rm -f some_file
# 	rm -f clean

# # test +=
# foo := start
# foo += more
# all: 
# 	echo $(foo)