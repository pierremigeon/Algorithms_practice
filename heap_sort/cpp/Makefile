PROG_NAME=HEAP_SORT

all: main.cpp heapSort.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

run: $(PROG_NAME)
	./$(PROG_NAME)

edit1:
	vi main.cpp

edit2:
	vi heapSort.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME)
	@rm -f ./a.out
