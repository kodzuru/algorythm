// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
	setlocale(0, "Russian");
	system("TITLE Неопознанный консольный объект");
	system("color 2");

	// алгоритм быстрого поиска стр. 28
	const int N = 10;
	int id[N], p, q; // массив ID-все числа попорядку , p-q пара

	// заполняем массив ID - 0...N-1
	for (int i = 0; i < N; i++) {
		id[i] = i;
	}
	/*
	В массив ID запоминаются пары p-q. Если следующая пара подходит, то q заменяется на p.
	Выполняется до тех пор, пока все ID не будут равны.
	*/
	while (cin >> p >> q)//вводим пару
	{
		int t = id[p]; // id[p] = p.

		if (t == id[q]) continue; // если p = q переходим к следующей итерации (если связь есть!)

		// проходим цикл ещё раз (если связи НЕТ!)
		for (int i = 0; i < N; i++) {
			if (id[i] == t){ // находим элемент p			
				id[i] = id[q]; // заменяем его в массиве ID на второй элемент пары(q)
			}
		}
		//cout << " " << id[p] << " " << id[q] << endl;
		// в итоге в массиве ID[p] = q; ID[q] = p;
		for (int i = 0; i < N; i++)
			cout << id[i] << " ";
		cout << endl;
	}

	_getch();
    return 0;
}

