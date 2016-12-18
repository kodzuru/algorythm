// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"

using namespace std;
int main(){
	setlocale(0, "Russian");
	system("TITLE Неопознанный консольный объект");
	system("color 2");
	srand(time(NULL));
	//примеры
	{
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
		//количество заходов в цикл при делении пополам
		/*
		for (int N = 1000; N <= 1000000000; N *= 10) {
			cout << lg(N) << " " << N << endl;
		}
		*/
		//neam & std. div.
		/*
		int N = 100;
		float m1 = 0.0, m2 = 0.0;
		for (int i = 0; i < N; i++)	{
			Number x = randNum();
			m1 += ((float)x) / N;
			m2 += ((float)x*x) / N;
		}
		cout << "Мат. ожидание.: " << m1 << endl;
		cout << "Среднеквадратичноное отклонение: " << sqrt(m2 - m1*m1) << endl;
		*/
		// Формула Герона для площади треугольника через стороны (3.9)
		/*
		Triangle tri;
		tri.top.x = 1.0;
		tri.top.y = 1.0;
		tri.left.x = 0.0;
		tri.left.y = 0.0;
		tri.right.x = 1.0;
		tri.right.y = 0.0;
		cout << "Площадь треугольника равна: " << triangle_square(tri) << endl;
		*/
	}
	

	_getch();
    return 0;
}

