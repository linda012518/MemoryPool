#include "Alloctor.h"
#include "MemoryMgr.hpp"

using namespace lyd;

void* operator new(size_t size)
{
	return MemoryMgr::Instance().allocMem(size);
}
void* operator new[](size_t size)
{
	return MemoryMgr::Instance().allocMem(size);
}

void operator delete(void* p) noexcept
{
	MemoryMgr::Instance().freeMem(p);
}

void operator delete[](void* p) noexcept
{
	MemoryMgr::Instance().freeMem(p);
}

void* mem_alloc(size_t size)
{
	return malloc(size);
}

void mem_free(void* p)
{
	free(p);
}
