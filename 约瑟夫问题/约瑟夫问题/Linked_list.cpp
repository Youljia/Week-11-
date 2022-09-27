#include "Linked_list.h"
#include<iostream>
using namespace std;

Linked_list::Linked_list() {
	this->tail = nullptr;
	this->front = nullptr;
}
//���б������Ԫ��
void Linked_list::add(int e) {
	if (this->tail == nullptr)
	{
		tail = new Node(e);
		front = tail;
		size++;
	}
	else
	{
		tail->next = new Node(e);
		tail = tail->next;
		tail->next = front;
		size++;
	}
}
//���б���ɾ��Ԫ��
//����ɾ���Ŀ���
//1.��ɾ���ڵ���β�ڵ��ʱ��
//2.��ɾ���ڵ���ͷ����ʱ��
//3.һ�����
void Linked_list::remove(Node* ahead) {
	if (ahead == tail)
	{
		Node* target = ahead->next;
		ahead->next = target->next;
		target->next = nullptr;
		target->e = NULL;
		front = tail->next;
		size--;
	}
	else if (ahead->next == tail)
	{
		Node* target = ahead->next;
		ahead->next = target->next;
		target->next = nullptr;
		target->e = NULL;
		tail = ahead;
		size--;
	}
	else
	{
		Node* target = ahead->next;
		ahead->next = target->next;
		target->next = nullptr;
		target->e = NULL;
		size--;
	}

}
int Linked_list::get_size() {
	return this->size;
}
void Linked_list::show() {
	Node* cur = this->front;
	while (cur != tail) {
		cout << cur->e << endl;
		cur = cur->next;
	}
	cout << tail->e << endl;
}