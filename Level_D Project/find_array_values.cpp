bool find_mutually_opposite_values(int* arr, int size) {

	for (int dig = 0; dig < size; dig++)
	{
		for (int i = dig + 1; i < size; i++)
		{
			if (arr[dig] == -arr[i]) {
				return true;
			}
		}
	}

	return false;
}

bool find_all_positive_values(int* arr, int size) {

	int countAllPositiveValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			countAllPositiveValues++;
		}
	}

	return countAllPositiveValues == size ;
}

bool find_all_negative_values(int* arr, int size) {

	int countAllNegativeValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			countAllNegativeValues++;
		}
	}

	return countAllNegativeValues == size;
}

bool find_all_odd_values(int* arr, int size) {

	int countAllOddValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			countAllOddValues++;
		}
	}

	return countAllOddValues == size;
}

bool find_all_even_values(int* arr, int size) {

	int countAllEvenValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			countAllEvenValues++;
		}
	}

	return countAllEvenValues == size;
}

bool find_positive_values(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			return true;
		}
	}

	return false;
}

bool find_negative_values(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			return true;
		}
	}

	return false;
}

bool find_one_positive_value(int* arr, int size) {

	int countOnePositiveValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			countOnePositiveValue++;
		}
	}

	return countOnePositiveValue == 1;
}

bool find_one_negative_value(int* arr, int size) {

	int countOneNegativeValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			countOneNegativeValue++;
		}
	}

	return countOneNegativeValue == 1;
}

bool find_most_positive_values(int* arr, int size) {

	int countMostPositiveValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			countMostPositiveValues++;
		}
	}

	return countMostPositiveValues > (size / 2);
}

bool find_most_negative_values(int* arr, int size) {

	int countMostNegativeValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			countMostNegativeValues++;
		}
	}

	return countMostNegativeValues > (size / 2);
}

bool find_less_positive_values(int* arr, int size) {

	int countLessPositiveValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			countLessPositiveValues++;
		}
	}

	return countLessPositiveValues < (size / 2);
}

bool find_less_negative_values(int* arr, int size) {

	int countLessNegativeValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			countLessNegativeValues++;
		}
	}

	return countLessNegativeValues < (size / 2);
}

bool find_most_even_values(int* arr, int size) {

	int countMostEvenValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			countMostEvenValues++;
		}
	}

	return countMostEvenValues > (size / 2);
}

bool find_most_odd_values(int* arr, int size) {

	int countMostOddValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			countMostOddValues++;
		}
	}

	return countMostOddValues > (size / 2);
}

bool find_less_even_values(int* arr, int size) {

	int countLessEvenValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			countLessEvenValues++;
		}
	}

	return countLessEvenValues < (size / 2);
}

bool find_less_odd_values(int* arr, int size) {

	int countLessOddValues = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			countLessOddValues++;
		}
	}

	return countLessOddValues < (size / 2);
}
bool find_even_value(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			return true;
		}
	}

	return false;
}

bool find_odd_value(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			return true;
		}
	}

	return false;
}

bool find_one_even_value(int* arr, int size) {

	int countOneEvenValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			countOneEvenValue++;
		}
	}

	return countOneEvenValue == 1;
}

bool find_one_odd_value(int* arr, int size) {

	int countOneOddValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			countOneOddValue++;
		}
	}

	return countOneOddValue == 1;
}

bool find_equal_even_value(int* arr, int size) {

	int dig = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] % 2 != arr[dig] % 2) {
			return false;
		}
	}

	return true;
}




