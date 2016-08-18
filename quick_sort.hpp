#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include <cstddef>
#include <iostream>
#include <cstring>

void swap(void* a, void* b, size_t size)
{
    char *c = (char*)malloc(size);
    std::memcpy(c,a,size);
    std::memcpy(a,b,size);
    std::memcpy(b,c,size);
    free(c);
}

void qsort(void* base, size_t num, size_t size, int((*compar)(const void*, const void*)))
{
    //TODO
}

#endif
