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

int	main() {
	int	length = 25;
	int	*list = generate_list(length);

	std::cout << "before sort: \n";
	print_list(length, list);
	std::cout << "\nAfter sort:\n"; 
	HeapSort::_HeapSort(list, length);
	print_list(length, list);
	return (0);
}
