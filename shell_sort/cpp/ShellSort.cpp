#include "ShellSort.hpp"

void	swap( int &a, int &b ) {
	int temp = a;
	a = b;
	b = temp;
}

void	ShellSort( int list[], int len ) {
	for (int g = len/2; g > 0; g /= 2 ) {
		for ( int i = 0; i + g < len; i++) {
			for ( int j = i; j >= 0 && list[j + g] < list[j]; j -= g )
				swap(list[j], list[j + g]);
		}
	}
}
