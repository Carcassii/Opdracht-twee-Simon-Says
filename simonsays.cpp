
#include <iostream>

#include <time.h>
#include <stdlib.h>
#include <string>
#include <Windows.h>

using namespace std;
int main() {
	string sequence = "";
	string usersequence = "";
	char numberino[10];
	numberino[0] = '0';
	numberino[1] = '1';
	numberino[2] = '2';
	numberino[3] = '3';
	numberino[4] = '4';
	numberino[5] = '5';
	numberino[6] = '6';
	numberino[7] = '7';
	numberino[8] = '8';
	numberino[9] = '9';

	int round;
	round = 1;
	srand(time(NULL));


	while (round) {

		//Hier laat ik de nummers zien en haal ik ze weg.
		sequence += numberino[rand() % 10];

		cout << sequence << flush;
		cout << "\014" << flush << '\n';
		Sleep(3000);
		system("CLS");

		//Hier vul je in welk nummer je denkt dat het is.
		cout << "Enter " << "the right number:";
		cin >> usersequence;

		//Je kunt alleen verliezen, dat gebeurt hier.
		if (usersequence != sequence) {
			cout << "YOU LOSE, WEAKLING! The correct sequence was: " << sequence;
			break;
		}
	}
	return 0;
}