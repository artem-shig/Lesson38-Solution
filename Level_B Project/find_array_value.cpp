#include "util.h"

int calc_large_value(int* arr, int size, int value_N) { //значения, которые > N(value)

	int largeValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > value_N) {
			largeValue++;
		}
	}

	return largeValue;
}

int calc_small_value(int* arr, int size, int value_N) {

	int smallValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < value_N) {
			smallValue++;
		}
	}

	return smallValue;
}

int calc_equal_value(int* arr, int size, int value_N) {

	int equalValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value_N) {
			equalValue++;
		}
	}

	return equalValue;
}

int calc_non_equal_value(int* arr, int size, int value_N) {

	int non_equalValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != value_N) {
			non_equalValue++;
		}
	}

	return non_equalValue;
}

int calc_multiple_values_value(int* arr, int size, int value_N) {

	if (value_N == 0) {
		return -1;
	}

	int multipleValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % value_N == 0) {
			multipleValue++;
		}
	}

	return multipleValue;
}

int calc_non_multiple_values_value(int* arr, int size, int value_N) {

	if (value_N == 0) {
		return -1;
	}

	int non_multipleValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % value_N != 0) {
			non_multipleValue++;
		}
	}

	return non_multipleValue;
}

int calc_abs_large_value(int* arr, int size, int value_N) {

	int absLargeValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) > value_N) {
			absLargeValue++;
		}
	}

	return absLargeValue;
}

int calc_abs_small_value(int* arr, int size, int value_N) {

	int absSmallValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) < value_N) {
			absSmallValue++;
		}
	}

	return absSmallValue;
}

int calc_abs_equal_value(int* arr, int size, int value_N) {

	int absEqualValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) == value_N) {
			absEqualValue++;
		}
	}

	return absEqualValue;
}