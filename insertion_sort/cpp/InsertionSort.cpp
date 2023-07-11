
#include "InsertionSort.hpp"

void	swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void	InsertionSort(int list[], int len) {	
	int j;

	for ( int i = 1; i < len; i++ ) {
		j = i;
		while ( j > 0 && list[j] < list[j - 1] ) {
			swap(list[j], list[j - 1]);
			--j;
		}
	}

}
