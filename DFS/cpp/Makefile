PROG_NAME=DFS

all: main.cpp list_funcs.cpp BinaryTreeFuncs.cpp LinkNode.cpp TreeNode.cpp DFS.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

run: $(PROG_NAME)
	./$(PROG_NAME)

debug: main.cpp list_funcs.cpp BinaryTreeFuncs.cpp LinkNode.cpp TreeNode.cpp DFS.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -g $^ -o $(PROG_NAME)
	lldb $(PROG_NAME)

edit:
	vi main.cpp

see:
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME) 
	@rm -rf ./$(PROG_NAME).dSYM
	@rm -f ./a.out
