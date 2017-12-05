#include <stdio.h>
#include "curl.h"

int main(void){
	struct MemoryStruct x = http("http://example.com");
	printf("Size: %d\n",x.size);
	printf("Response data: %s\n",x.memory);
	return 0;
}
