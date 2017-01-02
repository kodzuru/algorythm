#pragma once
template <typename Item>
class STACK_ARRAY
{
private:
	Item *s, *t;
	int N;
public:
	STACK_ARRAY(int);
	~STACK_ARRAY();
	int empty() const;
	void push(Item);
	Item pop();
};

