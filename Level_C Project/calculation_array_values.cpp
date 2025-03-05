#include "util.h"

int calc_arithmetic_mean_value(int* arr, int size) {

	int arithmeticMeanValue = 0;

	for (int i = 0; i < size; i++)
	{
		arithmeticMeanValue += arr[i];
	}

	arithmeticMeanValue /= size;

	return arithmeticMeanValue;
}

int calc_geometric_mean_value(int* arr, int size) {

	int geometricMeanValue = 1;

	for (int i = 0; i < size; i++)
	{
		geometricMeanValue *= arr[i];
	}

	if (geometricMeanValue <= 0) {
		return -1;
	}

	geometricMeanValue = sqrt(geometricMeanValue);

	return geometricMeanValue;
}

int find_count_large_value_arithm(int* arr, int size) {

	int largeValueArithm = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > calc_arithmetic_mean_value(arr, size)) {
			largeValueArithm++;
		}
	}

	return largeValueArithm;
}

int find_count_large_value_geomet(int* arr, int size) {

	int largeValueGeomet = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > calc_geometric_mean_value(arr, size)) {
			largeValueGeomet++;
		}
	}

	return largeValueGeomet;
}

int find_count_small_value_arithm(int* arr, int size) {

	int smallValueArithm = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < calc_arithmetic_mean_value(arr, size)) {
			smallValueArithm++;
		}
	}

	return smallValueArithm;
}

int find_count_small_value_geomet(int* arr, int size) {

	int smallValueGeomet = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < calc_geometric_mean_value(arr, size)) {
			smallValueGeomet++;
		}
	}

	return smallValueGeomet;
}

int find_count_equal_value_arithm(int* arr, int size, int d) {

	int equalValueArithm = 0;
	int maxValue = calc_arithmetic_mean_value(arr, size) + d;
	int minValue = calc_arithmetic_mean_value(arr, size) - d;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= minValue && arr[i] <= maxValue) {
			equalValueArithm++;
		}
	}

	return equalValueArithm;
}

int find_count_equal_value_geomet(int* arr, int size, int d) {

	int equalValueGeomet = 0;
	int maxValue = calc_geometric_mean_value(arr, size) + d;
	int minValue = calc_geometric_mean_value(arr, size) - d;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= minValue && arr[i] <= maxValue) {
			equalValueGeomet++;
		}
	}

	return equalValueGeomet;
}







































