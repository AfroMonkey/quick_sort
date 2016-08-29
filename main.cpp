#include <iostream>

#include "quick_sort.hpp"

#define NUM 10

int compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main(int argc, char const *argv[])
{
    int array[NUM];
    for (int i = 0; i < NUM; i++)
    {
        array[NUM] = std::rand();
    }
    std::cout << "Start" << std::endl;
    afro_qsort(array, NUM, sizeof(int), compare);
    std::cout << "End" << std::endl;
    return 0;
}
