#include "quick_sort.hpp"

int compare(const void* a, const void* b)
{
    return 1;
}

int main(int argc, char const *argv[])
{
    int array[] = {1, 5, 12, 7, 90, 1212, 43, 12, 8, 1, 2, 34, 6, 7};
    qsort(array, 14, sizeof(int), compare);
    for (int i = 0; i < 14; i++)
    {
        std::cout << array[i] << std::endl;
    }
    return 0;
}
