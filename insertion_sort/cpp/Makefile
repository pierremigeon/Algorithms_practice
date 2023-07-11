PROG_NAME=INSERTION_SORT

all: main.cpp InsertionSort.cpp list_funcs.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

run: $(PROG_NAME)
	./$(PROG_NAME)

debug: main.cpp BubbleSort.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -g $^ -o $(PROG_NAME)
	lldb $(PROG_NAME)
edit1:
	vi main.cpp

edit2:
	vi BubbleSort.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME) 
	@rm -rf ./$(PROG_NAME).dSYM
	@rm -f ./a.out
