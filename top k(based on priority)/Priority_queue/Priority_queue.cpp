#include "Priority_queue.h"
Priority_queue::Priority_queue() :heap() {
}
Priority_queue::Priority_queue(vector<int>& v):heap(v) {
}
int Priority_queue::get_size() {
	return this->heap.get_size();
}
bool Priority_queue::is_empty() {
	return this->heap.is_empty();
}
//������м���Ԫ��
void Priority_queue::enqueue(int e) {
	this->heap.add(e);
}
//�������ȼ�������
int Priority_queue::dequeue() {
	return this->heap.remove_front();
}
//���ض������ȼ���ߵ�Ԫ��
int Priority_queue::get_front() {
	return this->heap.max();
}
