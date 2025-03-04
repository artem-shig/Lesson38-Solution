#include "util.h"
#include "calculation_values.h"
#define BUF 20
int main() {
	
	cout << "Level A.\n";

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);
	
	cout << "\nArray: " << convert(arr, size) << endl;

	cout << " - Number of non-zero values in the array: "
		<< calc_non_zeros_value(arr, size) << endl;

	cout << " - Number of even values in an array: "
		<< calc_even_value(arr, size) << endl;

	cout << " - Number of positive values in an array: "
		<< calc_positive_value(arr, size) << endl;

	cout << " - Number of zero values in the array: "
		<< calc_zeros_value(arr, size) << endl;

	cout << " - Number of odd values in an array: "
		<< calc_odd_value(arr, size) << endl;

	cout << " - Number of negative values in an array: "
		<< calc_negative_value(arr, size) << endl;


	return 0;
}