#include "stdafx.h"
#include "QUEUE.h"


template <typename Item> QUEUE<Item>::QUEUE(int N)
{
	start = NULL;
}
template <typename Item> QUEUE<Item>::~QUEUE()
{
	while (start)
	{
		node *pv = start;
		start = start->next;
		delete pv;
	}
}

template <typename Item> int QUEUE<Item>::empty() const
{
	return (start == NULL);
}
template <typename Item> void QUEUE<Item>::put(Item x) {
	node* t = tail;
	tail = new node(x);
	if (start == NULL) {
		start = tail;
	}
	else {
		t->next = tail;
	}
}
template <typename Item> Item QUEUE<Item>::get() {
	Item v = start->item;
	node* t = start->next;
	delete start;
	start = t;
	return v;
}
template QUEUE<int>;