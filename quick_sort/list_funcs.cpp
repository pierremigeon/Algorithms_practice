#include "list_funcs.hpp"

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

void	swap(int **a, int **b) {
	int temp;

	temp = **a;
	**a = **b;
	**b = temp;
}

