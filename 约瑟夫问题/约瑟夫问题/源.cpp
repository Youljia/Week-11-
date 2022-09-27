#include<iostream>
#include"Linked_list.h"
using namespace std;

int main() {
	Linked_list game;
	int n, m;
	cout << "��������Ϸ����  " << endl;
	cin >> n;
	cout << "����������  " << endl;
	cin >> m;
	//��ʼ��ɱ��Ϸ
	for (int i = 1; i <= n; ++i)
		game.add(i);

	Node* next = game.front;
	while (game.get_size() > 2)
	{
		Node* ahead = next;
		for (int i = 1; i < m-1 ; ++i) {
			ahead = ahead->next;
		}
		next = ahead->next->next;
		game.remove(ahead);
	}

	game.show();
	return 0;
}