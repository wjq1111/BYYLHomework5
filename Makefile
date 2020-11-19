.PHONY: all run clean test rerun
all: bison flex g++
bison:
	bison -o main.tab.cc -d main.y
flex:
	flex -o lex.yy.cc main.l
g++:
	g++ $(shell ls *.cc *.cpp) -o main.out
test:
	./main.out <0.c > 0.res
rerun: clean all test

run:
	for file in $(basename $(shell find test/*.c)); \
	do \
		./main.out <$$file.c >$$file.res; \
	done
clean:
	rm -f *.output *.yy.* *.tab.* *.out *.res test/*.res