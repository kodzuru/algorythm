#include "stdafx.h"
#include "STACK_ARRAY.h"


template<typename Item> STACK_ARRAY<Item>::STACK_ARRAY(int maxN)
{
	s = new Item[maxN];
	t = new Item[maxN];
	N = 0;
	for (int i(0); i < maxN; i++) {
		t[i] = 0;
		s[i] = 0;
	}
}

template<typename Item> STACK_ARRAY<Item>::~STACK_ARRAY()
{
	delete[] s;
	delete[] t;
}

template<typename Item> int STACK_ARRAY<Item>::empty() const
{
	return (N == 0);
}

template<typename Item> void STACK_ARRAY<Item>::push(Item item)
{
	if (t[item] == 1) {
		return;
	}
	s[N++] = item;
	t[item] = 1;
}

template<typename Item> Item STACK_ARRAY<Item>::pop()
{
	t[s[--N]] = 0;
	return s[N];
}
template STACK_ARRAY<int>;