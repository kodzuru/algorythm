#pragma once



template <typename Item>
class STACK
{
private:
	int counter, max_size;
	struct node {
		int item;
		node* next;
		node(Item x, node* t) {
			item = x;
			next = t;
		}
		node(){}
	};
	node* start;
	Item *s, *temp;
public:
	STACK(int);
	int empty() const;
	void push(Item item);
	Item pop();
	void Print();
	~STACK();
};

