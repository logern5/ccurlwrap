#ifndef CCURL_HEAD
#define CCURL_HEAD
#include <curl/curl.h>
#include <stdlib.h>
struct MemoryStruct{
	char *memory;
	size_t size;
};
//static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp);
struct MemoryStruct http(CURL *curl_handle);
#endif
