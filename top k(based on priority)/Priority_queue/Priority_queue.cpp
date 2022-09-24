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
//向队列中加入元素
void Priority_queue::enqueue(int e) {
	this->heap.add(e);
}
//按照优先级出队列
int Priority_queue::dequeue() {
	return this->heap.remove_front();
}
//返回队列优先级最高的元素
int Priority_queue::get_front() {
	return this->heap.max();
}
