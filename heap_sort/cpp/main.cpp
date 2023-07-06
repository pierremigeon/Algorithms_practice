#include <iostream>
#include <cstdlib>
#include "HeapSort.hpp"

void	print_list( int len, int list[] ) {
	for ( int i = 0; i < len; i++ )
		std::cout << list[i] << std::endl;
}

int	*generate_list(int size) {
	int *list = new int[size];

	for (int i = 0; i < size; i++) {
		list[i] = rand();
	}
	return list;
}

int	check_sort( int list[], int len ) {
	len -= 1;
	for (int i = 0; i < len; ++i)
		if ( list[i] > list[i + 1])
			return (1);
	return (0);
}

int	main() {
	int length = 4200;
	int	*list = generate_list(length);

	std::cout << "before sort: \n";
	print_list(length, list);
	std::cout << "\nAfter sort:\n"; 
	HeapSort::_HeapSort(list, length);
	print_list(length, list);
	if (check_sort(list, length))
		std::cout << "The list of length " << length << " wasn't sorted correctly" << std::endl;

	return (0);
}
