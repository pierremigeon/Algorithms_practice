#include "list_funcs.hpp"
#include "MergeSort.hpp"

int	main() {
	int length = 8;
	int	*list = generate_list(length);

	std::cout << "before sort: \n";
	print_list(length, list);
	std::cout << "\nAfter sort:\n"; 
	mergeSort(list, 0, length - 1);
	print_list(length, list);
	if (check_sort(list, length))
		std::cout << "The list of length " << length << " wasn't sorted correctly" << std::endl;
	return (0);
}

