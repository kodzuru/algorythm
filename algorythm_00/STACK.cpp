#include "stdafx.h"
#include "STACK.h"


template <typename Item> STACK<Item>::STACK(int N)
{
	counter = N;
	node* t = new node(0, NULL); //соглашения о нулевом элементе
	node* start = t;
	for (int i = 1; i < N; i++) {
		t = (t->next = new node(0, NULL));
	}
}


template <typename Item> STACK<Item>::~STACK()
{
	delete t;
	delete start;
}

template <typename Item> int STACK<Item>::empty() const{
	if (!x) {
		return 0;
	}
	else {
		return 1;
	}
}
template <typename Item> void STACK<Item>::push(Item item) {
	x = 
}