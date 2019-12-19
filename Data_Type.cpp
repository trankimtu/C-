#include <iostream>
#include <iomanip> // Use for setprecision()
using namespace std;

int main() {

	cout << "************************************\n";
	cout << "*              String              *\n";
	cout << "************************************\n";
	cout << "\n";
		
		string name = "Randy";
		cout << name << endl;

		name = "Jerry";
		cout << name << endl;

		cout << "Here is my name: " << name << endl;

		string sentence = "Here is my name:";
		cout << sentence << name << endl;

		//Concatination
		string nameString = "bob";
		string two_names = name + nameString;
		cout << two_names << "\n\n";

	cout << "************************************\n";
	cout << "*             Integer              *\n";
	cout << "************************************\n";
	cout << "\n";

		// int: official allow between -32767 to 32767 but it allows between -2147483647 and 2147483647

		// short int: between -32767 to 32767 
		// long int: between -2147483647 and 2147483647
		// long long int: between -9223372036854775807 and 9223372036854775807

		// unsigned will take the memory of negative number and add it to the possitive number so it will double size of the capacity
		// Use specific type of integer to save resource of memory allocated

		int num1;
			num1 = -2147483647;
			cout << "Min int: " << num1 << endl;

			num1 = 2147483647;
			cout << "Max int: " << num1 << endl;

			num1 = 2147483648;
			cout << "Over max int: " << num1 << "\n\n";

		long int num2;
			num2 = -2147483647;
			cout << "Min long int: " << num2 << endl;

			num2 = 2147483647;
			cout << "Max long int: " << num2 << endl;

			num2 = 2147483648;
			cout << "Over max long int: " << num2 << "\n\n";

		long long int num3;
			num3 = -9223372036854775807;
			cout << "Min long long int: " << num3 << endl;

			num3 = 9223372036854775807;
			cout << "Max long long int: " << num3 << endl;

			num3 = 9223372036854775808;
			cout << "Over max long long int: " << num3 << "\n\n";


	cout << "\n\n";
	cout << "************************************\n";
	cout << "*          Float - Double          *\n";
	cout << "************************************\n";
	cout << "\n";

			// float go 6 digit - about 4 bit

		float numFloat;
			numFloat = 0.123456789012345678901234567890;
			cout << "NumFloat:  " << setprecision(20) << numFloat << endl;

		double numDouble;
			numDouble = 0.123456789012345678901234567890;
			cout << "numDouble: " << setprecision(20) << numDouble << endl; // setprecision is on iomanip library


		long double numLongDouble;
			numLongDouble = 0.123456789012345678901234567890;
			cout << "numLongDouble: " << setprecision(50) << numLongDouble << endl; // setprecision is on iomanip library

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*             Boolean              *\n";
	cout << "************************************\n";
	cout << "\n";

		bool isExist;

		isExist = true;
		cout << "isExist = true has value: " << isExist << endl;

		isExist = false;
		cout << "isExist = false has value: " << isExist << endl;

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*            Character             *\n";
	cout << "************************************\n";
	cout << "\n";

		char character;
			
		character = '$';
		cout << "Character $: " << character << endl;

		character = 36;
		cout << "Character askii = 36: " << character << endl;

		character = 84;
		cout << "Character askii = 84: " << character << endl;

		character = 156;
		cout << "Character askii = 156: " << character << endl;

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*              Const               *\n";
	cout << "************************************\n";
	cout << "\n";

		const int HIGHT_SCORE = 50;
		cout << "HIGHT_SCORE = " << HIGHT_SCORE << endl;

		const double PI = 3.14;
		int radius = 5;
		long area = 2 * PI * radius;

		cout << "Area = " << area << endl;


	cout << "\n\n";
	cout << "************************************\n";
	cout << "*           Enumerations           *\n";
	cout << "* Datatypes with predefined value  *\n";
	cout << "************************************\n";
	cout << "\n";
		
		enum EnumNames {
			Henry,	// 0
			Bob,	// 1
			Billy,	// 2
			Bobby,	// 3
			Ricky	// 4
		};

		EnumNames name1 = EnumNames(4);
		EnumNames name2 = Henry; // name must be in the enum list

		cout << "name1 = " << name1 << endl;
		cout << "name2 = " << name2 << endl;

		enum Colors {
			Red = 45,
			Blue,
			Black = 67,
			Pink,
			Purple
		};

		Colors color1 = Blue;
		cout << "color1 = " << color1 << endl;
		Colors color2 = Purple;
		cout << "color2 = " << color2 << endl;
		
	cout << "\n\n";
	cout << "************************************\n";
	cout << "*           End Program            *\n";
	cout << "************************************\n";
	cout << "\n";
// system ("pause");
	return 0;
}

