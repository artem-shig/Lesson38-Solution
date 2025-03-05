#include "util.h"
#include "calculation_array_values.h"
#define BUF 20
int main() {

	cout << "Level C.\n";

	int arr[BUF];

	int size;
	cout << "\n Enter size of array: ";
	cin >> size;

	int d;
	cout << "Enter the vector error: "; // погрешность вектора 
	cin >> d;

	init(arr, size, -10, 10);

	cout << " Array: " << convert(arr, size) << endl;

	cout << " - The arithmetic mean of all values in an array: "
		<< calc_arithmetic_mean_value(arr, size)
		<< "\n - Number of values that are greater than the mean of all values in the array: "
		<< find_count_large_value_arithm(arr, size)
		<< "\n - Number of values that are small than the mean of all values in the array: "
		<< find_count_small_value_arithm(arr, size)
		<< "\n - Number of values that are approximately equal the mean of all values in the array: "
		<< find_count_equal_value_arithm(arr, size, d) << endl;


	cout << "\n - The geometric mean of all values in an array: "
		<< calc_geometric_mean_value(arr, size)
		<< "\n - Number of values that are greater than the mean of all values in the array: "
		<< find_count_large_value_geomet(arr, size)
		<< "\n - Number of values that are small than the mean of all values in the array: "
		<< find_count_small_value_geomet(arr, size)
		<< "\n - Number of values that are approximately equal the mean of all values in the array: "
		<< find_count_equal_value_geomet(arr, size, d) << endl;


	return 0;
}