#pragma once
#include "Tree.h"
#include <vector>
#include <string>

using namespace std;

template <class T>
class Find
{
private:
	vector<T> arr;
	int size;
	Tree<T>* tree;
public:
	Find(vector<T>);
	Find(int size);
	vector<T> getArr() { return arr; }
	int find_by_value(T);
	T operator[](int index) { return arr[index]; }
};

template<class T>
Find<T>::Find(vector<T> arr) :arr(arr), size(arr.size()) {
	tree = new Tree<T>();
	for (int i = 0; i < arr.size(); i++) {
		tree->addToTree(arr[i], i);
	}
}



template<class T>
int Find<T>::find_by_value(T value)
{
	return tree->find_by_value(value);
}
