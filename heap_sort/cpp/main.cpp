#include <iostream>
#include <cstdlib>

int	generate_list(int size) {
	int *list = new int[size];

	for (int i = 0; i < size; i++) {
		list[i] = rand();
	}
	return list;
}

int	main() {
	list = generate_list();
	std::cout << "before sort: \n" << list << "\nAfter sort:\n" << head_sort(list) << std::endl;
	return (0);
}
