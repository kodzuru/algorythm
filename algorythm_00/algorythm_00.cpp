// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
	setlocale(0, "Russian");
	system("TITLE Неопознанный консольный объект");
	system("color 2");

	// алгоритм взвешенного быстрого соединения(weighted quick-union with path compression by halving algorythm)
	const int N = 10;
	int id[N], sz[N], p, q; // массив ID-все числа попорядку , p-q пара, SZ - массив с количеством связей в дереве

	// заполняем массив ID - 0...N-1, SZ - 1(в начале у каждого корня нет веток)
	for (int i = 0; i < N; i++) {
		id[i] = i;
		sz[i] = 1;
		cout << id[i] << " ";
	}

	cout << endl;
	/*
	В массив ID запоминаются пары p-q. Если следующая пара подходит, то q заменяется на p.
	Выполняется до тех пор, пока все ID не будут равны.
	*/
	while (cin >> p >> q)//вводим пару
	{

		int i, j;
		// делаем дерево плоским
		for (i = p; i != id[i]; i = id[i]) {
			id[i] = id[id[i]]; // Уменьшем пути пополам
		};
		for (j = q; j != id[j]; j = id[j]) {
			id[j] = id[id[j]]; // уменьшаем пути пополам
		};
		if (i == j) { cout << -1 << endl; continue; } // если p = q переходим к следующей итерации (если связь УЖЕ есть!)

		// выбираем необходимое дерево
		//(в начале разбиваем на много маленьких деревьев и если в конце деревья стыкуются, то делаем одно большое)
		if (sz[i] < sz[j]) { // закидываем в дерево с самой длинной цепочкой
			id[i] = j; sz[j] += sz[i];
		}
		else { // закидываем в любое подходящее дерево
			id[j] = i; sz[i] += sz[j];
		}

		for (int i = 0; i < N; i++) {
			cout << sz[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < N; i++) {
			cout << id[i] << " ";
		}
		cout << endl;

	}

	_getch();
    return 0;
}

