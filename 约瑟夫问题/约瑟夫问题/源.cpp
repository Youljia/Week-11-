#include<iostream>
#include"Linked_list.h"
using namespace std;

int main() {
	Linked_list game;
	int n, m;
	cout << "请输入游戏人数  " << endl;
	cin >> n;
	cout << "请输入密码  " << endl;
	cin >> m;
	//开始自杀游戏
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