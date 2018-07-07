#ifndef heap_H_INCLUDED
#define heap_H_INCLUDED
#include <vector>
#include <iostream>
using namespace std;

class heap
{
private:
    vector<int> minheap;
    int size = 0;

public:
    void swap(int a, int b);
    void heapify(int i);
    void insert(int n);
    int removemin();
    void print();
};

#endif // heap_H_INCLUDED
