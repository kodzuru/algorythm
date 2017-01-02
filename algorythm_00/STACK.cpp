#include "stdafx.h"
#include "STACK.h"




template <typename Item> STACK<Item>::STACK(int N)
{
	counter = 0;
	max_size = N;
	node* t = new node(0, NULL); //соглашения о нулевом элементе
	node* start = t;
	//std::cout << counter << std::endl;
}


template <typename Item> STACK<Item>::~STACK()
{
	while (start)
	{
		node *pv = start;
		start = start->next;
		delete pv;
	}
}

template <typename Item> int STACK<Item>::empty() const{
	if (!start) {
		return 0;
	}
	else {
		return 1;
	}
}
template <typename Item> void STACK<Item>::push(Item item) {


	node* pv = new node(item, start);
	start = pv;
	
	//std::cout << counter << std::endl;
	
}
template <typename Item> Item STACK<Item>::pop() 
{
	Item item = start->item;
	start = start->next;
	counter--;
	//std::cout << counter << std::endl;
	return item;
}
template <typename Item> void STACK<Item>::Print() {
	node* t = start;
	while (t) {
		std::cout << t << " " << t->item << "  " << t->next << std::endl;
		t = t->next;
	}
}

template STACK<int>;
