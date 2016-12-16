// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
	setlocale(0, "Russian");
	system("TITLE Неопознанный консольный объект");
	system("color 2");


	/*
	//------------------1.4 
	//p-q pair{0-2,1-4,2-5,3-6,0-4,1-3}		
	// обращение к ID - 13
	const int N = 10;
	int i, p, q, id[N];
	unsigned int counter = 0;

	for (i = 0; i < N; i++) {
		id[i] = i;
		cout << id[i] << " ";
	}
	cout << endl;


	while (cin >> p >> q){
		int t = id[p];

		if (t == id[q]) continue;

		for (i = 0; i < N; i++) {
			if (id[i] == t) {
				cout << "id[" << i << "] " << id[i] << endl;
				id[i] = id[q];
				counter++;
			}
		}
		cout << endl;

		for (int i = 0; i < N; i++) {
			cout << id[i] << " ";
		}
		cout << endl;
		cout << "Обратились к массиву: " << counter << " раз!" << endl;
	}
	*/

	/*
	//------------------1.5
	//p-q pair{0-2,1-4,2-5,3-6,0-4,1-3}
	// обращение к ID - 4
	const int N = 10;
	int p, q, id[N];
	unsigned int counter = 0;

	for (int i = 0; i < N; i++) {
		id[i] = i;
		cout << id[i] << " ";
	}
	cout << endl;


	while (cin >> p >> q) {

		int i, j;		
		for (i = p; i != id[i]; i = id[i]) { counter++; }
		for (j = q; j != id[j]; j = id[j]) { counter++; }
		if (i == j) continue;
		id[i] = j;
		
		for (int i = 0; i < N; i++) {
			cout << id[i] << " ";
		}
		cout << endl;
		cout << "Обратились к массиву: " << counter << " раз!" << endl;
	}
	*/


	_getch();
    return 0;
}

