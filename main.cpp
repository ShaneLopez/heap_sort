#include "heap.h"

int main()
{
    vector<int> data{40,15,100,50,30,10,40};
    heap minheap;

    for(int i = 0; i < data.size(); i++)
    {
        minheap.insert(data[i]);
    }

    minheap.print();
    return 0;
}
