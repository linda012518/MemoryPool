#ifndef _Alloctor_
#define _Alloctor_

#include <stdlib.h>

void* operator new(size_t size);
void* operator new[](size_t size);

void operator delete(void* p) noexcept;
void operator delete[](void* p) noexcept;

void* mem_alloc(size_t size);
void mem_free(void* p);

#endif // !_Alloctor_
