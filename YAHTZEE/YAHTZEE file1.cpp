#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main() {

	srand((unsigned int)time(NULL));

	//checks if game is running
	bool running = true;

	while (running) {


		cout << "__YAHTZEE__";

		cout << endl;
		cout << endl;


		//initial roll
		int die1 = rand() % (6 - 1 + 1) + 1;
		int die2 = rand() % (6 - 1 + 1) + 1;
		int die3 = rand() % (6 - 1 + 1) + 1;
		int die4 = rand() % (6 - 1 + 1) + 1;
		int die5 = rand() % (6 - 1 + 1) + 1;

	
		//prints value of die
		cout << "Die 1: " << "(" << die1 << ")" << endl;
		cout << "Die 2: " << "(" << die2 << ")" << endl;
		cout << "Die 3: " << "(" << die3 << ")" << endl;
		cout << "Die 4: " << "(" << die4 << ")" << endl;
		cout << "Die 5: " << "(" << die5 << ")" << endl;


		for (int i = 0;i < 2;i++) {


			cout << endl;

			//checks if player wants to reroll
			cout << "reroll Dice 1: " << "(" << die1 << ")?" << " (Y/N) ";
			string a = "";
			getline(cin, a);

			cout << "reroll Dice 2: " << "(" << die2 << ")?" << " (Y/N) ";
			string b = "";
			getline(cin, b);

			cout << "reroll Dice 3: " << "(" << die3 << ")?" << " (Y/N) ";
			string c = "";
			getline(cin, c);

			cout << "reroll Dice 4: " << "(" << die4 << ")?" << " (Y/N) ";
			string d = "";
			getline(cin, d);

			cout << "reroll Dice 5: " << "(" << die5 << ")?" << " (Y/N) ";
			string e = "";
			getline(cin, e);

			
			//sets new die values
			if (a == "Y") {
				die1 = rand() % (6 - 1 + 1) + 1;
			}

			if (b == "Y") {
				die2 = rand() % (6 - 1 + 1) + 1;
			}

			if (c == "Y") {
				die3 = rand() % (6 - 1 + 1) + 1;
			}

			if (d == "Y") {
				die4 = rand() % (6 - 1 + 1) + 1;
			}

			if (e == "Y") {
				die5 = rand() % (6 - 1 + 1) + 1;
			}

			cout << endl;
			cout << "You now have:"<<endl;
			cout << "Die 1: " << "(" << die1 << ")" << endl;
			cout << "Die 2: " << "(" << die2 << ")" << endl;
			cout << "Die 3: " << "(" << die3 << ")" << endl;
			cout << "Die 4: " << "(" << die4 << ")" << endl;
			cout << "Die 5: " << "(" << die5 << ")" << endl;

			cout << endl;

		}

		//variables
		int Ones = 0;
		int Twos = 0;
		int Threes = 0;
		int Fours = 0;
		int Fives = 0;
		int Sixes = 0;
		int sum = die1 + die2 + die3 + die4 + die5;

		int array[5] = { die1,die2,die3,die4,die5, };

		//checks for ones
		for (int i = 0;i < 5;i++) {

			if (array[i] == 1) {
				Ones++;
			}
		}


		if (Ones > 0) {
			cout << "You have " << Ones << " one(s)" << "		" << Ones << " points" << endl;
		}

		//checks for twos
		for (int i = 0;i < 5;i++) {

			if (array[i] == 2) {
				Twos++;
			}
		}

		if (Twos > 0) {
			cout << "You have " << Twos << " two(s)" << "		" << Twos*2 << " points" << endl;
		}

		//checks for threes
		for (int i = 0;i < 5;i++) {

			if (array[i] == 3) {
				Threes++;
			}
		}

		if (Threes > 0) {
			cout << "You have " << Threes << " three(s)" << "		" << Threes*3 << " points" << endl;
		}

		//checks for fours
		for (int i = 0;i < 5;i++) {

			if (array[i] == 4) {
				Fours++;
			}
		}

		if (Fours > 0) {
			cout << "You have " << Fours << " four(s)" << "		" << Fours*4 << " points" << endl;
		}

		//checks for fives
		for (int i = 0;i < 5;i++) {

			if (array[i] == 5) {
				Fives++;
			}
		}

		if (Fives > 0) {
			cout << "You have " << Fives << " five(s)" << "		" << Fives*5 << " points" << endl;
		}



		//checks for Sixes
		for (int i = 0;i < 5;i++) {

			if (array[i] == 6) {
				Sixes++;
			}
		}

		if (Sixes > 0) {
			cout << "You have " << Sixes << " six(es)" << "		" << Sixes*6 << " points" << endl;
		}

		//checks for 3 of a kind
		if (Ones == 3 || Twos == 3 || Threes == 3 || Fours == 3 || Fives == 3) {
			cout << "You have 3 of a kind.		" << sum << " points" << endl;

		}

		//checks for 4 of a kind
		if (Ones == 4 || Twos == 4 || Threes == 4 || Fours == 4 || Fives == 4) {
			cout << "You have 4 of a kind.		" << sum << " points" << endl;

		}
		//checks for Full house
		if (Ones == 3 || Twos == 3 || Threes == 3 || Fours == 3 || Fives == 3 || Sixes == 3) {

			if (Ones == 2 || Twos == 2 || Threes == 2 || Fours == 2 || Fives == 2 || Sixes == 2) {
				cout << "You have a full house.	        25 points" << endl;
			}
		}
		//checks for small straight
		if (array[0] < array[1] && array[1] < array[2] && array[2] < array[3]) {
			cout << "You have a small straight.    30 points" << endl;
		}
		else if (array[1] < array[2] && array[2] < array[3] && array[3] < array[4]) {

			cout << "You have a small straight.    30 points" << endl;
		}
			
	
		//checks for large straight
		if (array[0] < array[1] && array[2] < array[3] && array[3] < array[4]) {
			cout << "You have a large straight.		40 points" << endl;
		}

		//checks for YAHTZEE
		if (array[0] == array[1] && array[1] == array[2] && array[2] == array[3] && array[3] == array[4]) {
			cout << "YAHTZEE!!     50 points" << endl;
		}

		//chance
		cout << "You could take your chance.	" << sum << " points" << endl;

		//end game or restart
		cout << endl;
		cout << "Game over. Would you like to Quit or Restart? (Q/R) ";
		string end = "";
		getline(cin, end);

		cout << endl << endl;

		if (end == "Q") {
			running = false;
		}

		
	}



	
	



}