#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int MAX_BUFFER_LENGTH = 11;     // [1]
 
char* initializeBuffer () {
	char* buffer = (char*) malloc(MAX_BUFFER_LENGTH * sizeof(char));
 
	if (buffer == NULL) {
		printf("Could not allocate memory on the heap\n");
	}
 
    return buffer;
}
 
int main(void) 
{
	signed int buffer_length;
	char* source_buffer = "0123456789";               // Arbitrary test data
	char* destination_buffer = NULL;
 
	buffer_length = -1;                               // Hypothetical attacker-controlled variable
	printf("buffer_length as a signed int is %d and implicitly cast to an unsigned int is %u\n", buffer_length, buffer_length);
 
	// [2] Faulty size check    
	if (buffer_length > MAX_BUFFER_LENGTH) {        
		printf("Integer overflow detected\n");
	}
	else {
		destination_buffer = initializeBuffer();        
	
		// [3] Potential buffer overflow due to integer overflow
		strncpy(destination_buffer, source_buffer, buffer_length); 
		destination_buffer[buffer_length] = '\0';
 
        printf("Destination buffer contents: %s\n", destination_buffer);
	}
 
	free(destination_buffer);
 
	return 0;
}