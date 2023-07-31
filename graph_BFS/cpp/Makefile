PROG_NAME=GRAPH_BFS

all: main.cpp list_funcs.cpp graphNode.cpp listNode.cpp treeNode.cpp
	@clear
	@clear
	c++ -Wall -Wextra -Werror -std=c++98 $^ -o $(PROG_NAME)

run: $(PROG_NAME)
	./$(PROG_NAME)

debug: main.cpp list_funcs.cpp graphNode.cpp listNode.cpp treeNode.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -g $^ -o $(PROG_NAME)
	lldb $(PROG_NAME)

edit1:
	vi main.cpp

edit2:
	vi graphNode.cpp

see: 
	less ./Makefile

clean:
	@rm -f ./$(PROG_NAME) 
	@rm -rf ./$(PROG_NAME).dSYM
	@rm -f ./a.out
