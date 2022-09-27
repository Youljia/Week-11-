#pragma once
#include"Node.h"
class Linked_list
{
public:
	Linked_list();
	void add(int e);
	void remove(Node* ahead);
	int get_size();
	void show();
public:
	Node* tail;
	Node* front;
	int size;
};

