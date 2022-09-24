#pragma once
#include"Binary_heap.h"
class Priority_queue
{
public:
	Priority_queue();
	Priority_queue(vector<int>& v);
	int get_size();
	bool is_empty();
	void enqueue(int e);
	int dequeue();
	int get_front();
private:
	Binary_heap heap;
};

