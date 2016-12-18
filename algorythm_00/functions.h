#pragma once

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