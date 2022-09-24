#include "Binary_heap.h"

//�޲ι���
Binary_heap::Binary_heap() {
}
//�������캯��
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
//��������Ԫ�أ���ά�ֶѵ�����-->ÿһ���ڵ�ĺ��Ӷ�С�ڱ���
void Binary_heap::add(int e) {
	arra.push_back(e);
	sift_up(arra.size() - 1);
}
//���߶������Ԫ�أ����Ѷ�Ԫ��
int Binary_heap::remove_front() {
	int i = arra[0];
	arra[0] = arra.back();
	arra.pop_back();
	sift_down(0);
	return i;
}
//�������Ԫ�أ����Ҳ���һ��Ԫ��
int Binary_heap::replace(int e) {
	int i = arra[0];
	arra[0] = e;
	sift_down(0);
	return i;
}
//��һ����������ɶ�
void Binary_heap::heapify() {
	//���һ����Ҷ�ӽڵ�
	int k = parent(arra.size() - 1);
	while (k >= 0)
	{
		sift_down(k);
		k--;
	}
}
//��k�ĸ��׽ڵ�
int Binary_heap::parent(int k) {
	if (k == 0)
		return -1;
	else
		return (k - 1) / 2;
}
//��k������
int Binary_heap::left_kid(int k) {
	return 2 * k + 1;
}
//��k���Һ���
int Binary_heap::right_kid(int k) {
	return 2 * k + 2;
}
//�ϸ�������ά����ĩβ���Ԫ�غ�ѵ�����
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
//�³�������ά���������Ԫ�غ�ѵ�����
void Binary_heap::sift_down(int k) {
	while (left_kid(k) < arra.size())
	{
		//�ҳ��Ӻ����нϴ�ֵ������j
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
//����������
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
//���ضѵ����Ԫ��
int Binary_heap::max() {
	return arra[0];
}
