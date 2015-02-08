all: clean test

test:
	g++ main.cpp -o a.out
	cat problem.txt | ./a.out | diff -s answer.txt -

clean:
	rm -f main.o
