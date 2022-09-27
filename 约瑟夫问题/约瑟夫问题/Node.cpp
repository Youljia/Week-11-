#include "Node.h"
#include<iostream>
using namespace std;
Node::Node() {
	this->next = nullptr;
	this->e = NULL;
}
Node::Node(int e) {
	this->next = nullptr;
	this->e = e;
}

