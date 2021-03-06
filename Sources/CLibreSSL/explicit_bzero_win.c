/*
 * Public domain.
 * Win32 explicit_bzero compatibility shim.
 */

#if defined(_WIN32)

#include <windows.h>
#include <string.h>

void
explicit_bzero(void *buf, size_t len)
{
	SecureZeroMemory(buf, len);
}

#endif
