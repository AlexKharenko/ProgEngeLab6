#include "Find.h"


template<>
Find<int>::Find(int size) :size(size) {
	tree = new Tree<int>();
	for (int i = 0; i < size; i++) {
		int number = rand() % 100;
		tree->addToTree(number, arr.size());
		arr.push_back(number);
	}
}

template<>
Find<double>::Find(int size) :size(size) {
	tree = new Tree<double>();
	for (int i = 0; i < size; i++) {
		double number = double(rand() % 1000) / 10;

		tree->addToTree(number, arr.size());
		arr.push_back(number);
	}
}
template<>
Find<string>::Find(int size) :size(size) {
	tree = new Tree<string>();
	for (int i = 0; i < size; i++) {
		string str = to_string(rand() % 1000);
		tree->addToTree(str, arr.size());
		arr.push_back(str);
	}
}