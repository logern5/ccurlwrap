#include <stdio.h>
#include "../CCurl_simple.h"

int main(void){
	struct MemoryStruct x = http_get("http://example.com");
	printf("Size: %d\n",x.size);
	printf("Response data: %s\n",x.memory);
	free(x.memory);
	return 0;
}
