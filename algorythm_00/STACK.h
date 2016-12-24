#pragma once



template <typename Item>
class STACK
{
private:
	int counter;
	struct node {
		int item;
		node* next;
		node(int x, node* t) {
			item = x;
			next = t;
		}
	};
	node* start;
public:
	STACK(int);
	int empty() const;
	void push(Item item);
	Item pop();
	~STACK();
};

