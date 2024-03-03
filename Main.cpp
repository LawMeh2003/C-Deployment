#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//function to write data into txt file
//display on screen

void writeToTextFileAndDisplay(const string& data) {
	ofstream file("data.txt");
	if (!file) {
		cerr << "Error opening file for writing." << endl;
		return;
	}

	//write data to file
	file << data << endl;

	//display data
	cout << "Data written to file and displayed on screen: " << data << endl;

	file.close();
}

void readFromTextFileAndDisplay() {
	ifstream file("data.txt");
	if (!file) {
		cerr << "Error opening file for reading." << endl;
		return;
	}

	string line;
	//read data from file
	while (getline(file, line)) {
		//display data
		cout << "Data read from file and displayed on screen: " << line << endl;

	}

	file.close();
}

int main() {
	cout << "Welcome to the file I/O program" << endl;

	writeToTextFileAndDisplay("This is a simple File I/O programe. It merely takes in and reads data and then display on the console exactly as it reads.");

	readFromTextFileAndDisplay();

	return 0;
}