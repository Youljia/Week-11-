# Week-11-

# 数据结构与算法

## 堆，优先队列和堆排序

### 堆

* Binary heap ,是一个二叉堆

* 特点

  * 是一个完全二叉树

    * 在每一层装满后，才可以在下一层以从左到右的顺序添加元素

  * 堆中每一个节点元素都大于等于它的孩子节点元素

    --> 根部元素是最大值

* 用数组来表示堆

  * 由于堆是完全二叉树，所以从第一层开始，自左向右从0进行编号

  * ```c++
    	//基本操作
    	Binary_heap();
    	Binary_heap(vector<int>& v);
    	int get_size();
    	bool is_empty();
    	void add(int e);
    	int remove_front();
    	int replace(int e);
    	//将任意数组转化为堆的形式
    	void heapify();
    	void show();
    	int max();
    private:
    	int parent(int k);
    	int left_kid(int k);
    	int right_kid(int k);
    	//上浮操作
    	void sift_up(int k);
    	//下沉操作
    	void sift_down(int k);
    	void swap(int& a, int& b);
    ```

### 优先队列

* 是一个高层数据结构，可以依托其他数据结构
* 特点
  * 本质上也是一个队列，一端进，一端出
  * 但是，出队列的顺序是按照优先级，优先级越高，就越先出队列
  * 优先队列是动态的

* 基于堆实现优先队列

  ```c++
  	//队列的基本操作
  	Priority_queue();
  	Priority_queue(vector<int>& v);
  	int get_size();
  	bool is_empty();
  	void enqueue(int e);
  	int dequeue();
  	int get_front();
  ```

* 应用
  * top k
    * 找到数组中最小的k个元素
    * 利用最大堆，一直维护前k个是最小元素，在大于k的地方遍历，如果遇到比前k个中最大元素还要大的数，就进行交换
    * 找到数组中最大的k个元素
    * 利用最小堆，原理和上面是一样的
