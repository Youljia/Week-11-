#include<iostream>
#include<vector>
#include"Binary_heap.h"
using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,10 };
	Binary_heap heap(v);
	heap.heapify();
	heap.show();
	heap.add(80);
	cout << heap.max() << endl;
	heap.remove_front();
	cout << heap.max() << endl;
	heap.replace(70);
	cout << heap.max() << endl;
}