#include <iostream>
using namespace std;
// Make a currency convertor using a 1-5 menu

int value = 1;
int userInput;
float usdAmount;
float totalAmount;
float conversions[4] = { 1.02865 ,2.01214, 148.688, 1.00470 };
void inccorect() {
	cout << "ERROR DIDN'T INPUT VALUE BETWEEN 1-5";
}
int main() {

	
	
	
	
	// Displays the menu
	
	string countries[5] = { " ","Convert to Italy", "Convert to Germany", "Convert to Japan", "Convert to Switzerland"};
	while (value < 5) {
		cout << "Press and enter: " << value << "  "<< countries[value] << endl;
		value++;


		

}
	cin >> userInput;


	 // Does conversion corresponding to the number the user inputs
	if (userInput == 1) {
		cout << "Enter USD amount you want converted: ";

		

		cin >> usdAmount;
		totalAmount = conversions[0] * usdAmount;

		cout << "You have " << totalAmount << " Italian Lira! ";
	}
	else if (userInput == 2) {
		cout << "Enter USD amount you want converted: ";

		

		cin >> usdAmount;

		totalAmount = conversions[1] * usdAmount;

		cout << "You have " << totalAmount << " Euros! ";
	}
	else if (userInput == 3) {
		cout << "Enter USD amount you want converted: ";

		

		cin >> usdAmount;


		
		totalAmount = conversions[2] * usdAmount;

		cout << "You have " << totalAmount << " Yen! ";
	}
	else if (userInput == 4) {
		cout << "Enter USD amount you want converted: ";

		

		cin >> usdAmount;

		totalAmount = conversions[3] * usdAmount;

		cout << "You have " << totalAmount << " Swedish Krona! ";
	}
	else if(userInput > 4){
		 inccorect();
		 
	}


		
		







	
		



	

	


	return 0;
}

