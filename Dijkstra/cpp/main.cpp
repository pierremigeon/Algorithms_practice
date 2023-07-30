#include "list_funcs.hpp"
#include "graph_and_list_funcs.hpp"

int	main() {
	int length = 10;
	int	*list = generate_list(length);

	std::cout << "before sort: \n";
	print_list(length, list);
	std::cout << "\nAfter sort:\n"; 
	dijkstraMain(list, length);
	print_list(length, list);
	if (check_sort(list, length))
		std::cout << "The list of length " << length << " wasn't sorted correctly" << std::endl;
	return (0);
}

