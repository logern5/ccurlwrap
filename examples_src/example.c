#include <stdio.h>
#include <stdlib.h>
#include "../CCurl.h"

int main(void){
	CURL *curl_handle;
	curl_global_init(CURL_GLOBAL_ALL);
	curl_handle = curl_easy_init();
	curl_easy_setopt(curl_handle,CURLOPT_URL,"http://example.com");
	struct MemoryStruct x = http(curl_handle);
	curl_easy_cleanup(curl_handle);
	curl_global_cleanup();
	printf("Size: %d\n", x.size);
	printf("Response data: %s\n", x.memory);
	free(x.memory);
	return 0;
}
