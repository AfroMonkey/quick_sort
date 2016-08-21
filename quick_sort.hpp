#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include <cstdlib> // size_t, malloc
#include <cstring> // memcpy

void swap(void* a, void* b, size_t size)
{
    char *c = (char*)malloc(size);
    std::memcpy(c,a,size);
    std::memcpy(a,b,size);
    std::memcpy(b,c,size);
    free(c);
}

void* _partition(void* start, void* end, size_t size, int((*compare)(const void*, const void*)))
{
    void* pivot = end;
    void* i = start;
    for (void* j = start; j < end; j += size)
    {
        if (compare(j, pivot) <= 0)
        {
            swap(i, j, size);
            i += size;
        }
    }
    swap(i, end, size);
    return i;
}

void _qsort(void* start, void* end, size_t size, int((*compare)(const void*, const void*)))
{
    if (start < end)
    {
        void* pivot = _partition(start, end, size, compare);
        _qsort(start, pivot - size, size, compare);
        _qsort(pivot + size, end, size, compare);
    }
}

void qsort(void* base, size_t num, size_t size, int((*compare)(const void*, const void*)))
{
    _qsort(base, base + --num * size, size, compare);
}

#endif
