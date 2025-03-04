#include "util.h"
#include "find_array_value.h"
#define BUF 20
int main() {

	cout << "Level B.\n";

	int arr[BUF];

	int size;
	cout << "\n Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);

	cout << " Array: " << convert(arr, size) << endl;

	int value;
	cout << " Enter your value: ";
	cin >> value;

	cout
		<< "\n - Number of array values that are greater than the specified value: "
		<< calc_large_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are less than the specified value: "
		<< calc_small_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are equal to the specified value: "
		<< calc_equal_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are non-equal to the specified value: "
		<< calc_non_equal_value(arr, size, value) << endl;

	cout << " - Number of array values that are multiples of a given value: "
		<< calc_multiple_values_value(arr, size, value) << endl;

	cout << " - Number of array values that are non-multiples of a given value: "
		<< calc_non_multiple_values_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are greater in absolute value than the specified value: "
		<< calc_abs_large_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are less in absolute value than the specified value: "
		<< calc_abs_small_value(arr, size, value) << endl;

	cout
		<< " - Number of array values that are equal in absolute value than the specified value: "
		<< calc_abs_equal_value(arr, size, value) << endl;

	return 0;
}