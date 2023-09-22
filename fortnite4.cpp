#include <iostream>
using namespace std;


void agecheck(char use);
char use = '2';
void bigcheck(char use2);
char use2 = '3';
int age2;

int main() {
	system("cls");
	cout << "Kies welke opdracht u wilt gebruiken " << endl << "1. leeftijdscheck" << endl << "2. Vergroote leeftijdscheck" << endl << "9. exit" << endl;
	int keuze(0);
	cin >> keuze;
	if (keuze == 1){
		agecheck(use);
	}
	if (keuze == 2) {
		bigcheck(use2);
	}
	if (keuze == 9) {
		exit(9);
	}
}



void agecheck(char use) {
	system("cls");
	int leeftijd[2] = { 17, 17 };
	string naam[2] = { "Naam1","Naam2" };
	cout << " Persoon 1, Voer hier je naam in: ";
	cin >> naam[0];
	system("cls");
	cout << " Persoon 2, Voer hier je naam in: ";
	cin >> naam[1];
	system("cls");
	cout << "Hoe oud is " + naam[0] + ":" << endl;
	cin >> leeftijd[0];
	system("cls");
	cout << "Hoe oud is " + naam[1] + ":" << endl;
	cin >> leeftijd[1];
	system("cls");
	if (leeftijd[0] > leeftijd[1]) {
		cout << naam[0] + " is de oudste";
	}
	else if (leeftijd[0] == leeftijd[1]) {
		cout << " dus " << naam[0] + " is even oud als " + naam[1] << "!        ";
	}
	else cout << naam[0] + " is de jongste!  ";

	system("pause");
	main();
}

void bigcheck(char use2) {
	system("cls");
	string names[20];
	int age2[20];
	for (int i = 0; i < 20; i++) {
		cout << "Hoe heet je? ";
		cin >> names[i];
		cout << "Hoe oud bent u, " + names[i] << "?" << endl;
		cin >> age2[i];
		system("cls");
	}
	cout << "Van welke leeftijd wilt u alle namen zien?";
	int leeftijd2;
	cin >> leeftijd2;
	cout << "De mensen met de leeftijd zijn: " << leeftijd2 << endl;

	int x;
	string studenten[20];
	for (int i = 0; i < 20; i++) {
		if (age2[i] == leeftijd2) {
			cout << names[i] << " is " << age2[i] << " jaar oud." << endl;
		  studenten += names[x];
		}
		cout << studenten;
	}
}
	//else if (leeftijd2 && age2 + age2[2]); {
		//cout << "niemand heeft de leeftijd" << endl;