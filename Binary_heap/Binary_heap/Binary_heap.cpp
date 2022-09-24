#include "Binary_heap.h"

//无参构造
Binary_heap::Binary_heap() {
}
//拷贝构造函数
Binary_heap::Binary_heap(vector<int>& v) :arra(v) {
}
int Binary_heap::get_size() {
	return arra.size();
}
bool Binary_heap::is_empty() {
	if (get_size() == 0)
		return true;
	else
		return false;
}
//向堆中添加元素，并维持堆的性质-->每一个节点的孩子都小于本身
void Binary_heap::add(int e) {
	arra.push_back(e);
	sift_up(arra.size() - 1);
}
//移走堆中最大元素，即堆顶元素
int Binary_heap::remove_front() {
	int i = arra[0];
	arra[0] = arra.back();
	arra.pop_back();
	sift_down(0);
	return i;
}
//移走最大元素，并且插入一个元素
int Binary_heap::replace(int e) {
	int i = arra[0];
	arra[0] = e;
	sift_down(0);
	return i;
}
//将一个数组整理成堆
void Binary_heap::heapify() {
	//最后一个非叶子节点
	int k = parent(arra.size() - 1);
	while (k >= 0)
	{
		sift_down(k);
		k--;
	}
}
//求k的父亲节点
int Binary_heap::parent(int k) {
	if (k == 0)
		return -1;
	else
		return (k - 1) / 2;
}
//求k的左孩子
int Binary_heap::left_kid(int k) {
	return 2 * k + 1;
}
//求k的右孩子
int Binary_heap::right_kid(int k) {
	return 2 * k + 2;
}
//上浮操作，维持在末尾添加元素后堆的性质
void Binary_heap::sift_up(int k) {
	while (k > 0)
	{
		if (arra[k] > arra[parent(k)])
		{
			swap(arra[k], arra[parent(k)]);
			k = parent(k);
		}
		else
			break;
	}
}
//下沉操作，维护移走最大元素后堆的性质
void Binary_heap::sift_down(int k) {
	while (left_kid(k) < arra.size())
	{
		//找出子孩子中较大值的索引j
		int j = left_kid(k);
		if (j + 1 < arra.size() && arra[j + 1] > arra[j])
			j++;
		if (arra[j] > arra[k])
		{
			swap(arra[j], arra[k]);
			k = j;
		}
		else
			break;
	}
}
//交换两个数
void Binary_heap::swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void Binary_heap::show() {
	cout << "[ ";
	for (int i : arra)
	{
		cout << i << " ";
	}
	cout << "]" << endl;
}
//返回堆的最大元素
int Binary_heap::max() {
	return arra[0];
}
