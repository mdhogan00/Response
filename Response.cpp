/** Marcellus Hogan; Code Sample */



#include <iostream>
#include <string>
#include <string.h>
//#include "header.h"

using namespace std;



//Tests to see if three numbers can be input in a rising, ordered sequence in order to total 20.
int math() {

	int count1;
	int count2;
	int count3;
	int total;

	cout << "Input 3 values that chronologically add to up 20." << endl;

	cin >> count1;
	cin >> count2;
	cin >> count3;

	if (count1 < count2 && count2 < count3 && count1 < count3) {

		total = count1 + count2 + count3;

		if (total == 20) {

			cout << "Excellent, you have great mathematical skills" << endl;

		}
		else {

			cout << "Nice try." << endl;
			math();

		}

	}
	else {

		cout << "Give it another try." << endl;
		math();

	}

	return 0;

}



//Takes a certain number of words/strings and stores them into multiple arrays. Then, it gives back the total size of each array.
string storage() {

	int x;
	string word;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	string small[20];
	string medium[20];
	string large[20];


	cout << "Enter the amount of words you wish to store." << endl;
	cin >> x;
	cout << "Enter " << x << " word(s)." << endl;

	for (int i = 0; i < x; i++) {

		cin >> word;


		if (word.length() <= 4) {

			small[count1] = word;
			count1 = count1 + 1;

		}
		else if (word.length() > 4 && word.length() <= 7) {

			medium[count2] = word;
			count2 = count2 + 1;

		}
		else if (word.length() > 7 && word.length() <= 10) {

			large[count3] = word;
			count3 = count3 + 1;

		}
	}
		
			cout << "The small storage array contains " << count1 << " word(s)." << endl;
			cout << "The medium storage array contains " << count2 << " word(s)." << endl;
			cout << "The large storage array contains " << count3 << " word(s)." << endl;

	return word;

}

//Returns the name of any superhero to which a name matches to.
string powers() {

	string pick[8] = {"Superman", "Supergirl", "Superboy", "Aquaman", "Batman", "Thor", "Iron Man", "Spider-man"};
	string chosen[10];
	string first;
	int x;

	cout << "Input a superhero in order to see if they are in the list." << endl;
	
	
	cin >> first;


	if (first == pick[0] || first == pick[1] || first == pick[2] || first == pick[3] || first == pick[4] || first == pick[5] || first == pick[6] || first == pick[7]) {

		chosen[0] = first;
		cout << "Yes, " << chosen[0] << " is within the powers list." << endl;

	}
	else {

		chosen[0] = first;
		cout << "No, " << chosen[0] << " is not within the powers list." << endl;
		powers();

	}
	
	return first;
}

//Decides if the user wants to continue trying the program or quit.
int quitYN() {

	int choice;

	cout << "Type in 1-3 again for the initial few choices or type '0' to leave." << endl;
	cin >> choice;


	if (choice == 1) {

		cout << "1 has been selected." << endl;
		math();
		quitYN();
		system("PAUSE");


	}
	else if (choice == 2) {

		cout << "2 has been selected." << endl;
		storage();
		quitYN();
		system("PAUSE");

	}
	else if (choice == 3) {

		cout << "3 has been selected." << endl;
		powers();
		quitYN();
		system("PAUSE");

	}
	else if (choice == 0) {

		exit;

	}

	else {

		cout << "You don't know how to read, do you?" << endl;
		quitYN();
		system("PAUSE");
	}

	return 0;

}

	//Initializes the main program sequence.
	int main() {


		int initial;

		cout << "Hello, Please input 1 for a math question, 2 for a word/string storage system, 3 for a Superhero dictionary, or 0 to quit:" << endl;

		cin >> initial;

		if (initial == 1) {

			cout << "1 has been selected." << endl;
			math();
			quitYN();
			system("PAUSE");


		}
		else if (initial == 2) {


			cout << "2 has been selected." << endl;
			storage();
			quitYN();
			system("PAUSE");

		}
		else if (initial == 3) {


			cout << "3 has been selected." << endl;
			powers();
			quitYN();
			system("PAUSE");

		}
		else if (initial == 0) {

			exit;

		}
		else {

			cout << "Let's... try this again." << endl;
			system("PAUSE");
		}

		return 0;


	}
