#include "list_funcs.hpp"
#include "BubbleSort.hpp"

int	main() {
	int length = 4200;
	int	*list = generate_list(length);

	std::cout << "before sort: \n";
	print_list(length, list);
	std::cout << "\nAfter sort:\n"; 
	_BubbleSort(list, length);
	print_list(length, list);
	if (check_sort(list, length))
		std::cout << "The list of length " << length << " wasn't sorted correctly" << std::endl;
	return (0);
}

