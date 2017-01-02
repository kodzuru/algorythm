#pragma once


template <typename Item>
class QUEUE
{
private:
	int counter, max_size;
	struct node {
		int item;
		node* next;
		node(Item x) {
			item = x;
			next = NULL;
		}
	};
	node* start;
	node* tail;
public:
	QUEUE(int);
	int empty() const;
	void put(Item);
	Item get();
	~QUEUE();
};

