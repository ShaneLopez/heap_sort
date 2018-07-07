#include "heap.h"

void heap::swap(int a, int b)
{
    int temp = minheap[a];
    minheap[a] = minheap[b];
    minheap[b] = temp;
}

void heap::heapify(int i)
{
    int least = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;

    if(size > left && minheap[left] < minheap[least])
        least = left;

    if(size > right && minheap[right] < minheap[least])
        least = right;

    if(least != i)
    {
        swap(i,least);
        heapify(least);
    }
}

void heap::insert(int n)
{
    minheap.push_back(n);
    size++;

    for(int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(i);
    }
}

int heap::removemin()
{
    int min = minheap[0];
    minheap[0] = minheap[minheap.size() - 1];
    minheap.pop_back();
    size--;
    heapify(0);
    return min;
}

void heap::print()
{
    while(minheap.size() > 0)
    {
        cout << removemin() << " ";
    }
    cout << endl;
}
