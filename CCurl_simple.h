#ifndef CCURL_SIMPLE_HEAD
#define CCURL_SIMPLE_HEAD
#include <curl/curl.h>
#include <stdlib.h>
struct MemoryStruct{
	char *memory;
	size_t size;
};
//static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp);
struct MemoryStruct http_get(char *url);
#endif
