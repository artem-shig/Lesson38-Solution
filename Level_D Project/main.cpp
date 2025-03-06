#include "util.h"
#include "find_array_values.h"
#define BUF 20
int main() {

	cout << "Level C.\n";

	int arr[BUF];

	int size;
	cout << "\n Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);

	cout << " Array: " << convert(arr, size) << endl;

	string msg = find_mutually_opposite_values(arr, size) ? "Yes." : "No.";

	cout << "\n - Are there any mutually opposite values in the array? "
		<< msg << endl;

	string msg1 = find_all_positive_values(arr, size) ? "Yes." : "No.";

	cout << "\n - Are all elements of the array positive? " << msg1 << endl;

	string msg2 = find_all_negative_values(arr, size) ? "Yes." : "No.";

	cout << " - Are all elements of the array negative? " << msg2 << endl;

	string msg3 = find_all_odd_values(arr, size) ? "Yes." : "No.";

	cout << "\n - Are all elements of the array odd? " << msg3 << endl;

	string msg4 = find_all_even_values(arr, size) ? "Yes." : "No.";

	cout << " - Are all elements of the array even? " << msg4 << endl;

	string msg5 = find_positive_values(arr, size) ? "Yes." : "No.";

	cout << "\n - Is there at least one positive element in the array? "
		<< msg5 << endl;

	string msg6 = find_negative_values(arr, size) ? "Yes." : "No.";

	cout << " - Is there at least one negative element in the array? "
		<< msg6 << endl;

	string msg7 = find_one_positive_value(arr, size) ? "Yes." : "No.";

	cout << "\n - Is there only one positive element in the array? "
		<< msg7 << endl;

	string msg8 = find_one_negative_value(arr, size) ? "Yes." : "No.";

	cout << " - Is there only one negative element in the array? "
		<< msg8 << endl;

	string msg9 = find_most_positive_values(arr, size) ? "Yes." : "No.";

	cout << "\n - Are most of the elements in the array positive? "
		<< msg9 << endl;

	string msg10 = find_most_negative_values(arr, size) ? "Yes." : "No.";

	cout << " - Are most of the elements in the array negative? "
		<< msg10 << endl;

	string msg11 = find_less_positive_values(arr, size) ? "Yes." : "No.";

	cout << "\n - In an array, are the minority of elements positive? "
		<< msg11 << endl;

	string msg12 = find_less_negative_values(arr, size) ? "Yes." : "No.";

	cout << " - In an array, are the minority of elements negative? "
		<< msg12 << endl;

	string msg13 = find_most_even_values(arr, size) ? "Yes." : "No.";

	cout << "\n - In the array, most of the elements are even? "
		<< msg13 << endl;

	string msg14 = find_most_odd_values(arr, size) ? "Yes." : "No.";

	cout << " - In an array, most of the elements are odd? "
		<< msg14 << endl;

	string msg15 = find_less_even_values(arr, size) ? "Yes." : "No.";

	cout << "\n - In the array, less of the elements are even? "
		<< msg15 << endl;

	string msg16 = find_less_odd_values(arr, size) ? "Yes." : "No.";

	cout << " - In an array, less of the elements are odd? "
		<< msg16 << endl;

	string msg17 = find_even_value(arr, size) ? "Yes." : "No.";

	cout << "\n - Does the array contain at least one even element? "
		<< msg17 << endl;

	string msg18 = find_odd_value(arr, size) ? "Yes." : "No.";

	cout << " - Does the array contain at least one odd element? "
		<< msg18 << endl;

	string msg19 = find_one_even_value(arr, size) ? "Yes." : "No.";

	cout << "\n - Is there only one even element in the array? "
		<< msg19 << endl;

	string msg20 = find_one_odd_value(arr, size) ? "Yes." : "No.";

	cout << " - Is there only one odd element in the array? "
		<< msg20 << endl; 

	string msg21 = find_equal_even_value(arr, size) ? "Yes." : "No.";

	cout << "\n - Do all elements of the array have the same parity? "
		<< msg21 << endl;

	return 0;
}