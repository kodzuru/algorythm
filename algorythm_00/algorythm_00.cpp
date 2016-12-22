// algorythm_00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"
typedef unsigned int ui;


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
		//Решето Эрастофена 3.5 3.054
		/*
		unsigned int N = 50000;
		int* a = new int[N];
		if (a == 0) {
		cout << "out of memory" << endl;
		return -1;
		}
		for (int i(0); i < N; i++) {
		a[i] = 1;
		}
		for (int i(2); i < N; i++) {
		if (a[i]) {
		for (int j(i); j*i < N; j++) {
		a[i*j] = 0;
		}
		}
		}
		for (int i(0); i < N; i++) {
		if (a[i]) {
		cout << a[i] << "  " << i << endl;
		}
		}
		delete[] a;

		//через vector runtime 0.07
		const ui N = 50;
		vector<int> a(N);
		for (int i(0); i < a.size(); i++) {
		a[i] = 1;
		}
		for (int i(2); i < a.size(); i++) {
		if (a[i]) {
		for (int j(i); j*i < a.size(); j++) {
		a[i*j] = 0;
		}
		}
		}
		for (int i(0); i < a.size(); i++) {
		if (a[i]) {
		cout << a[i] << "  " << i << endl;
		}
		}

		*/
		// Бросаем монетку
		/*
		int i,j,cnt, N = 32, M = 1000;
		int* f = new int[N + 1];
		for (j = 0; j < N; j++) {
		f[j] = 0;
		}
		for (i = 0; i < M; i++, f[cnt]++) {
		for (cnt = 0, j = 0; j <= N; j++) {
		if (heads()) {
		cnt++;
		}
		}
		}
		for (j = 0; j <= N; j++) {
		if (f[j] == 0) {
		cout << ".";
		}
		for (i = 0; i < f[j]; i += 10) {
		cout << "*";
		}
		cout << endl;
		}
		delete[] f;
		*/
		//Вычисление ближайшей точки
		/*
		float d = 0.2; // расстояние меньше d
		int i, cnt = 0, N = 50;
		Point* a = new Point[N];
		for (i = 0; i < N; i++) {
		a[i].x = randFloat();
		a[i].y = randFloat();
		}
		for (i = 0; i < N; i++) {
		for (int j(i + 1); j < N; j++) {
		if (distance(a[i], a[j]) < d) {
		cnt++;
		}
		}
		}
		cout << cnt << " pairs within (пар в пределах) " << d << endl;
		delete[] a;
		*/
		// 3.10
		/*
		const int N = 10;
		int a[N];
		for (int i(0); i < N; i++) {
		a[i] = N - i;
		cout << a[i] << " ";
		}
		cout << endl;
		for (int i(0); i < N; i++) {
		a[i] = a[a[i]]; //меняются местами элементы, нулевого(a[10]) не существует
		cout << a[i] << " ";
		}
		cout << endl;
		*/
		//3.14 рассчёт времени выполнения программы
		/*		
		ui start_time = clock();	

		ui end_time = clock();
		double runtime = double(end_time - start_time) / CLOCKS_PER_SEC;
		cout << "Время выполнения программы: " << runtime << endl; // 0.007
		*/
		//Задача Иосифа Флавия 3.9
		/*
		int i, N = 9, M = 5;//N - всего позиций, M - с которого начинаем считать
		//создаём циклический список
		node* t = new node(1, NULL);
		t->next = t;
		node* x = t; // x - адрес начального узла
		cout << x << " " << x->item << "  " << x->next << endl;
		cout << endl;
		//создаём циклический списов
		for (i = 2; i <= N; i++) {
		x = (x->next = new node(i, t));
		cout << x << " " << x->item << "  " << x->next << endl;
		}
		cout << endl;
		//убиваем своего
		while (x != x->next) //ссылается ли текущий элемент сам на себя
		{
		cout << endl << x << " " << x->item << "  " << x->next << endl << endl;
		for (i = 1; i < M; i++)// проходим 4 позиции
		{
		x = x->next;
		cout << x << " " << x->item << "  " << x->next << endl;
		}
		x->next = x->next->next; // перескакиваем через 1 (удаляем уго из списка)

		}
		cout << endl << x->item << endl; // выводим оставшуюся позицию
		delete t;
		*/
		// 3.23
		/*
		int cnt, N = 500;
		node* x = nodeInit(N);
		cnt = nodeSize(x);
		cout << cnt << endl;
		delete x;
		*/
		//список в обратном поряке 3.10
		/*
		node* list_start = nodeInit_list(10);
		node* x = list_start;

		for (int i(0); i < 10; i++) {
		std::cout << x << " " << x->item << "  " << x->next << std::endl;
		x = x->next;
		}
		cout << endl;
		node* x_1 = list_start;
		node* rv = reverse_1(x_1);
		for (int i(0); i < 10; i++) {
		std::cout << rv << " " << rv->item << "  " << rv->next << std::endl;
		rv = rv->next;
		}
		*/
		// 3.11 вставка в сортированный список
		/*
		node* rand_x = nodeInit_list_rand(5);
		node *a = rand_x, *t = rand_x;
		cout << endl;
		node* sort_x = nodeInit_list(10);
		node *u, *x, *b = sort_x;
		for (t = a->next; t != NULL; t = u) //выбираем элемент списка
		{
		u = t->next;
		for (x = b; x->next != NULL; x = x->next) //проходим сортированый список
		{
		if (x->next->item > t->item) // ищем куда вставить
		{
		break;
		}
		}
		//переходим к следующему элементу вставляемого списка
		t->next = x->next;
		x->next = t;
		}
		while (b) {
		std::cout << b << " " << b->item << "  " << b->next << std::endl;
		b = b->next;
		}
		*/
		//3.33
		/*
		node* rand_list_x = nodeInit_list_rand(10);
		node* x = rand_list_x;
		node* x_1 = rand_list_x;
		node* y = rand_list_x;
		while (x) {
		std::cout << x << " " << x->item << "  " << x->next << std::endl;
		x = x->next;
		}
		cout << endl;
		node* a = rand_list_x;
		while (y) {
		if (a->item < y->item) {
		a = y;
		}
		y = y->next;
		if (!y) {
		y = a;
		y->next = NULL;
		y = y->next;
		}
		}
		while (x_1) {
		std::cout << x_1 << " " << x_1->item << "  " << x_1->next << std::endl;
		x_1 = x_1->next;
		}
		*/
	}
	// 3.34
	node* rand_list_x = nodeInit_list_rand_without_head(10);
	node* x = rand_list_x;
	while (x) {
		std::cout << x << " " << x->item << "  " << x->next << std::endl;
		x = x->next;
	}

	/*
	node* rand_list_x = nodeInit_list_rand(10);
	node* x = rand_list_x;
	node* y = rand_list_x->next;
	while (x) {
		std::cout << x << " " << x->item << "  " << x->next << std::endl;
		x = x->next;
	}
	cout << endl;
	node* a = rand_list_x->next;
	while (y) {
		if (a->item > y->item) {
			a = y;
			if (!a->next) {
				y->next = NULL;
			}
		}
		y = y->next;
	}
	a->next = rand_list_x->next->next;
	rand_list_x->next = a;
	node* x_1 = rand_list_x;
	std::cout << a << " " << a->item << "  " << a->next << std::endl;
	std::cout << rand_list_x << " " << rand_list_x->item << "  " << rand_list_x->next << std::endl;
	cout << endl;
	while (x_1) {
		std::cout << x_1 << " " << x_1->item << "  " << x_1->next << std::endl;
		x_1 = x_1->next;
	}
	*/
	_getch();
    return 0;
}

