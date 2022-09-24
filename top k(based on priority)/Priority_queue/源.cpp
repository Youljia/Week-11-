#include<iostream>
#include<vector>
#include"Priority_queue.h"
using namespace std;

//top k问题 --> 找出数组中最小的k个元素
class Solution1 {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		Priority_queue queue;
		for (int i = 0; i < k; ++i)
			queue.enqueue(arr[i]);
		for (int i = k; i < queue.get_size(); ++i)
		{
			if (!queue.is_empty() && arr[i] < queue.get_front())
			{
				queue.dequeue(); 
				queue.enqueue(arr[i]);
			}
		}
		vector<int> v;
		for (int i = 0; i < k; ++i)
			v.push_back(queue.dequeue());
		return v;
	}

	//找到数组中第k小的元素
	int select_k(vector<int>& arr, int k) {
		vector<int> t = getLeastNumbers(arr, k);
		return t.at(0);
	}
};


int main()
{
	vector<int> v1{ 1,2,3,4,5,6,7,10 };
	Solution1 s1;
	vector<int> c1;
	c1 = s1.getLeastNumbers(v1, 4);
	for (int i : c1)
		cout << i << endl;
	cout << s1.select_k(v1,3) << endl;
	return 0;
}