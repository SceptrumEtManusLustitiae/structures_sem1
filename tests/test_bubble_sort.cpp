#define CATCH_CONFIG_MAIN
#include "../include/bubble_sort.h"
#include "../catch2/catch.hpp"

TEST_CASE() {
	int n = 5;

	int array[5] = { 2, 4, 9, 8, 3 };
	BubbleSort(n, array);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array[i] <= array[i + 1]);
	}

	int array1[5] = {};
	BubbleSort(n, array1);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array1[i] <= array1[i + 1]);
	}

	float array2[5] = { 3.3, 1.5, -3, 10, 4 };
	BubbleSort(n, array2);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array2[i] <= array2[i + 1]);
	}
}