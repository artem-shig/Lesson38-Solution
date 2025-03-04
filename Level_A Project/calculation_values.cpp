int calc_non_zeros_value(int* arr, int size) {

	int non_zerosValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0) {
			non_zerosValue++;
		}
	}

	return non_zerosValue;
}

int calc_even_value(int* arr, int size) {

	int evenValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			evenValue++;
		}
	}

	return evenValue;
}

int calc_positive_value(int* arr, int size) {

	int positivValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			positivValue++;
		}
	}

	return positivValue;
}

int calc_zeros_value(int* arr, int size) {

	int zeros = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			zeros++;
		}
	}

	return zeros;
}

int calc_odd_value(int* arr, int size) {

	int oddValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			oddValue++;
		}
	}

	return oddValue;
}

int calc_negative_value(int* arr, int size) {

	int negativeValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			negativeValue++;
		}
	}

	return negativeValue;
}