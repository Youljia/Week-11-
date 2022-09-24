#pragma once
#include<vector>
#include<iostream>
using namespace std;
class Binary_heap
{
public:
	Binary_heap();
	Binary_heap(vector<int>& v);
	int get_size();
	bool is_empty();
	void add(int e);
	int remove_front();
	int replace(int e);
	void heapify();
	void show();
	int max();
private:
	int parent(int k);
	int left_kid(int k);
	int right_kid(int k);
	void sift_up(int k);
	void sift_down(int k);
	void swap(int& a, int& b);
private:
	vector<int> arra;
};

