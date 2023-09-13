PROG_NAME=QUICK_SORT

all: main.cpp MergeSort.cpp list_funcs.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

base: main.cpp list_funcs.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)
	
run: $(PROG_NAME)
	./$(PROG_NAME)

debug: main.cpp MergeSort.cpp list_funcs.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -g $^ -o $(PROG_NAME)
	lldb $(PROG_NAME)
edit1:
	vi main.cpp

edit2:
	vi MergeSort.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME) 
	@rm -rf ./$(PROG_NAME).dSYM
	@rm -f ./a.out
