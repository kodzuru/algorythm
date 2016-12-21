#pragma once
using namespace std;
int lg(int N){
	int i;
	for (i = 0; N > 0; i++, N /= 2);
	return i;
}

typedef int Number;
Number randNum()
{
	return rand();
}


struct Point {
	double x;
	double y;
};

struct Triangle {
	Point top;
	Point left;
	Point right;
};

double triangle_square(const Triangle& tr) {
	double S, P, a, b, c;
	a = sqrt(pow((tr.top.x - tr.left.x), 2) + pow((tr.top.y - tr.left.y), 2));
	b = sqrt(pow((tr.top.x - tr.right.x), 2) + pow((tr.top.y - tr.right.y), 2));
	c = sqrt(pow((tr.left.x - tr.right.x), 2) + pow((tr.left.y - tr.right.y), 2));
	P = (a + b + c) / 2;
	S = sqrt(P*(P - a)*(P - b)*(P - c));
	return S;
}

int heads() {
	return rand() < RAND_MAX / 2;
}
float randFloat() {
	return 1.0*rand() / RAND_MAX;
}
float distance(Point& a, Point& b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

//структура узла списка
struct node {
	int item;
	node* next;
	node(int x, node* t) {
		item = x;
		next = t;
	}
	node(){}
};
//циклический список
node* nodeInit(int N) {
	node* t = new node(0, NULL);
	t->next = t;
	node* x = t;
	for (int i = 1; i < N; i++) {
		x = (x->next = new node(i, t));		
	}
	return x;
}

int nodeSize(node* x) {
	int cnt = 0;
	node* temp = x;
	while(x->next != temp) {
		//std::cout << x << " " << x->item << "  " << x->next << std::endl;
		cnt++;
		x = x->next;
	};
	return (cnt + 1);
}


struct list {
	int key;
	list* next;
};

//односвязанный список с концом и мнимым начальным элементом
node* nodeInit_list(int N) {
	node* t = new node(0, NULL); //соглашения о нулевом элементе
	node* x = t;
	for (int i = 1; i < N; i++) {
		t = (t->next = new node(i, NULL));
	}
	return x;
}

//переворачивает список
node* reverse_1(node* x) {
	node *t, *y = x, *r = NULL; // p. 101
	while (y != NULL) {
		t = y->next;
		y->next = r;
		r = y;
		y = t;
	}
	return r;
}

//односвязанный список с концом cо случайными элементами  и мнимым начальным элементом
node* nodeInit_list_rand(int N) {
	node* t = new node(0, NULL); //соглашение о нулевом элементе
	node* x = t;
	for (int i = 1; i < N; i++) {
		t = (t->next = new node(rand()%100, NULL));
	}
	return x;
}
//односвязанный список с концом cо случайными элементами
node* nodeInit_list_rand_without_head(int N) {
	node* t = new node(rand() % 100, NULL); //соглашение о нулевом элементе
	node* x = t;
	for (int i = 1; i < N; i++) {
		t = (t->next = new node(rand() % 100, NULL));
	}
	return x;
}
// выводит список
void nodePrint(node* t) {
	std::cout << std::endl;
	node* x = t;
	while (x) {
		std::cout << x << " " << x->item << "  " << x->next << std::endl;
		x = x->next;
	}
	std::cout << std::endl;
}

node* construct(int N) {
	node* freelist = new node[N+1]();
	for (int i(0); i < N; i++) {
		freelist[i].item = i;
		freelist[i].next = &freelist[i + 1];
	}
	freelist[N].next = NULL;
	freelist[N].item = N;
	return freelist;
}