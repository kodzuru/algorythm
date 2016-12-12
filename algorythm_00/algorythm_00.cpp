// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
	setlocale(0, "Russian");
	system("TITLE Неопознанный консольный объект");
	system("color 2");

	const int N = 10000;
	int id[N], p, q;
	for (int i = 0; i < N; i++) id[i] = i;
	while (cin >> p >> q)
	{
		int t = id[p];
		if (t == id[q]) continue;
		for (int i = 0; i < N; i++)
			if (id[i] == t) id[i] = id[q];
		cout << " " << p << " " << q << endl;
	}

	_getch();
    return 0;
}

