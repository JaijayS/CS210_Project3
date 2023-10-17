#include <iostream>
#include <fstream>
#include <map>

using namespace std;


class Menu { // Declare Class Menu

public: // public members 

	void InitialMenu();
	void SetOption(int inputOption);
	void Option1(); //Numeric value
	void Option2();	// Option 2
	void Option3(); // Option 3 
	void Option4(); // Option 4; 


private: // private members

	// File Mangagement
	ifstream itemsFS;
	ofstream outFS;

	// Variables 
	string itemWord;
	string inputWord;
	string word;
	int option;
	int itemCounter;

	// Map declaration
	map <string, int> wordFreq;

};


void Menu::InitialMenu() { // Inital menu upon starting program

	int inputOption = 0;


	while (inputOption != 1 && inputOption != 2 && inputOption != 3 && inputOption != 4) { // Input validation while loop. If input is not 1, 2, 3, or 4, the program will continue to request option. 


		// Main menu layout
		cout << "MAIN MENU: " << endl;
		cout << " Option 1: Numeric Value of specified item in list." << endl;
		cout << " Option 2: List all items purchased." << endl;
		cout << " Option 3: Histogram of all items purchased " << endl;
		cout << " Option 4: Exit Program." << endl;

		cout << "Enter your option: ";
		cin >> inputOption;

	}

	// Invoke Set option method with user input
	SetOption(inputOption);
}


void Menu::SetOption(int inputOption) {

	option = inputOption;
	// if statements to invoke assoicated method with each option
	if (option == 1) {

		Option1();

	}
	else if (option == 2) {

		Option2();

	}
	else if (option == 3) {

		Option3();

	}
	else {

		Option4();

	}

}
void Menu::Option1() {

	system("cls");
	cout << "Opening file CS210_Project_Three_Input_File.txt." << endl;
	itemsFS.open("CS210_Project_Three_Input_File.txt");
	// Opens file to read from and opens new file to write outputs. 
	outFS.open("Input_Item.dat");


	if (!itemsFS.is_open()) {	// If file to read from does not open, program exits. 

		cout << "Could not open file wordFile.txt." << endl;
		exit(1);

	}

		cout << "Enter an item: ";
	cin >> inputWord; // Input the item that the user is searching for. 

	while (!itemsFS.eof()) { // While loop if not at the end of the readfile

		itemsFS >> itemWord;

		if (!itemsFS.fail()) {

			if (itemWord == inputWord) { // if the input word is equal to the word read on the file, the counter adds 1 for that item. 

				++itemCounter;

			}
		}
	}
	system("cls");

	// Console output for user
	cout << "Item name: " << inputWord << endl;
	cout << "Item count: " << itemCounter << endl;

	// Output to file 
	outFS << "Item name: " << inputWord << "\nItem count: " << itemCounter << endl;

	// Close both files/ Invokes main menu
	itemsFS.close();
	outFS.close();

	system("pause");
	system("cls");
	// Invokes the main menu
	InitialMenu();

}


void Menu::Option2() {

	// Opens file to read from and opens new file to write outputs. 
	cout << "Opening file CS210_Project_Three_Input_File.txt." << endl;
	itemsFS.open("CS210_Project_Three_Input_File.txt");

	outFS.open("Frequency_List.dat");

	if (!itemsFS.is_open()) {

		cout << "Could not open file wordFile.txt." << endl;
		exit(1);

	}
	while (itemsFS >> word) {
		// Adds to map
		wordFreq[word]++;

	}

	system("cls");
	// Loop thru keys and pairs the keys/values
	for (const auto& pair : wordFreq) {
		// output to console/ output file
		cout << pair.first << ": " << pair.second << '\n';
		outFS << pair.first << ": " << pair.second << '\n' << endl;

	}

	// Close both files/ Invokes main menu
	itemsFS.close();
	outFS.close();
	system("pause");
	system("cls");
	InitialMenu();
}


void Menu::Option3() {

	// Opens file to read from and opens new file to write outputs. 

	cout << "Opening file CS210_Project_Three_Input_File.txt." << endl;
	itemsFS.open("CS210_Project_Three_Input_File.txt");
	outFS.open("Histogram_List.dat");

	if (!itemsFS.is_open()) {

		cout << "Could not open file wordFile.txt." << endl;
		exit(1);

	}
	while (itemsFS >> word) {
		// Adds to map
		wordFreq[word]++;

	}

	system("cls");

	for (const auto& pair : wordFreq) {
		// Loop thru keys and pairs the keys/values

		cout << pair.first << ": ";
		outFS << pair.first << ": ";

		//  Nested Loop for values of each key
		for (int i = 0; i < pair.second; i++) {

			cout << "*";
			outFS << "*";

		}

		cout << endl;
		outFS << endl;

	}

	// Close both files/ Invokes main menu
	itemsFS.close();
	outFS.close();
	system("pause");
	system("cls");
	InitialMenu();

}


void Menu::Option4() {
	// Ends program
	system("cls");
	cout << "Corner Grocer program terminated." << endl;
	exit(0);

}


int main() {

	// Declare object list to Class menu
	Menu list;

	// Invoke Iniital method of object list
	list.InitialMenu();

}