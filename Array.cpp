#include <iostream>
using namespace std;

int main() {

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*              Array               *\n";
	cout << "************************************\n";
	cout << "\n";

		int arr_nums[50] = {}; // Make 50 int int with all value of 0
		int arr_nums2[6] = { 12, 34, 5, 7, 123, 4 }; // 6 elements with initial values
		int arr_nums3[7] = { 9, 2 }; // first 2 elements are initialized, rest are defaulted to zero

		int arr_nums4[] = { 45, 12, 4 }; // asumes from the initialized amount - length of 3

		string arr_str_names[] = { "Booty", "Clappers" };

		string arr_str_bookList[4] = {
			"Unbroken",			// index = 0
			"Can't Hurt Me",	// index = 1
			"The Godfather",	// index = 2
			"Supermarket"		// index = 3
		};

		cout << "This is the third book: " + arr_str_bookList[2] << endl;

		arr_str_bookList[0] = "Booty";
		cout << "This is the first book: " << arr_str_bookList[0] << endl;

		int arr_int_ages[] = { 13, 17, 12, 134, 67 };
		cout << "age[3] = " << arr_int_ages[3] << endl;
		arr_int_ages[3]++;
		cout << "age[3] = " << arr_int_ages[3] << "\n\n";
		cout << "*age = address of first element \t = " << *arr_int_ages << endl;

		int arr_int_ages_1st_element_size = sizeof(*arr_int_ages);
		int arr_int_ages_size = sizeof(arr_int_ages);
		int arr_int_ages_length = arr_int_ages_size / arr_int_ages_1st_element_size;

		cout << "Size of first element of the array \t = " << arr_int_ages_1st_element_size << endl;
		cout << "Size of the arr_int_ages array \t\t\t = " << arr_int_ages_size << endl; // 4 byte * 5
		cout << "Length of the age array \t\t = " << arr_int_ages_length << "\n\n";

		cout << "All element in the arr_int_ages - For loop with i: \n";
		for (int i = 0; i < arr_int_ages_length; i++) {
			cout << "arr_int_ages [" << i << "] = " << arr_int_ages[i] << endl;
		}

		cout << "All element in the arr_int_ages - For each element: \n";
		int index = 0;
		for (int e: arr_int_ages) {
			cout << "arr_int_ages [" << index << "] = " << e << endl;
			index++;
		}


	cout << "\n\n";
	cout << "************************************\n";
	cout << "*      Multidimensional Array      *\n";
	cout << "************************************\n";
	cout << "\n";
		
		// Array of array (more than 1 array)
		// Ex: 2 dimentional array
		// [][][] - row 1
		// [][][] - row 2

	    int cards[2][3]; // row_index = 2, element_index 3 

		//juice has 2 rows and 3 columns
		int juice[2][3] = { 2, 4, 1, 2, 3, 3 };	// 2*3=6 elements total

			// [2][4][1] - row 1
			// [2][3][3] - row 2

		int salamander[3][4] = {
			{ 4, 1, 2, 4 },
			{ 3, 5, 1, 9 },
			{ 1, 3, 1, 2 }
		};
		// row, column
		cout << "Value at row_index 1, element_index 3 = " << salamander[1][3] << endl;
		cout << "Value at row_index 2, element_index 1 = " << salamander[2][1] << endl;

		for (int row = 0; row < 3; row++) {
			for (int column = 0; column < 4; column++) {
				cout << "Element[" << row << "][" << column << "] = " << salamander[row][column] << endl;
			}
		}

		cout << "\n\n";
		for (int row = 0; row < 3; row++) {
			for (int column = 0; column < 4; column++) {
				cout << "Element[" << row << "][" << column << "] = " << salamander[row][column] << "\t";
			}
			cout << endl;
		}

		/*cout << "\n\n";
		for (int element: salamander) { // Does not work for multidimensional array)
			cout << element << endl;
		}*/

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*           End Program            *\n";
	cout << "************************************\n";
	cout << "\n";


	//system("pause");
	return 0;
}
