
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main() {

	cout << "************************************\n";
	cout << "*           If Statement           *\n";
	cout << "************************************\n";
	cout << "\n";
		
		short int ages;
		string gender;
		bool genderBool;

		cout << "Please enter your ages: ";
		cin >> ages;
		cout << "Your gender is (Female/Male): ";
		cin >> gender;

		if (gender == "Male" || gender == "male" || gender == "M" || gender == "m") 
			 genderBool = true;
		else genderBool = false;

	
			cout << "You're a ";
		if (ages <= 17		&& genderBool == true) cout << ages << " years old boy!" << endl;
		else if (ages > 17  && genderBool == true) cout << ages << " years old man!" << endl;
		else if (ages <= 17 && genderBool == false) cout << ages << " years old girl!" << endl;
		else if (ages >	17	&& genderBool == false) cout << ages << " years old woman!" << endl;

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*              Switch              *\n";
	cout << "************************************\n";
	cout << "\n";
		
		short int select;
		cout << "Your OS" << endl;
		cout << "1 \t Windows \n";
		cout << "2 \t Mac OS \n";
		cout << "3 \t Linux Mint \n";
		cout << "4 \t Linux Ubuntu \n";
		cout << "5 \t Kali Linux \n";

	cout << "Enter number from 1 to 5 for switch case: ";
	cin >> select;
	switch (select) {
		case 1: 
			cout << "Your OS is Windows" << endl;
			break;
		case 2: 
			cout << "Your OS is Mac OS" << endl;
			break;
		case 3:
			cout << "Your OS is Linux Mint" << endl;
			break;
		case 4:
			cout << "Your OS is Linux Ubuntu" << endl;
			break;
		case 5:
			cout << "Your OS is Kali Linux" << endl;
			break;
		default:
			cout << "Your input is not from 1 - 5" << endl;
	}

	cout << "\n\n";
	cout << "************************************\n";
	cout << "*           End Program            *\n";
	cout << "************************************\n";
	cout << "\n";
	// system ("pause");
	return 0;
}

