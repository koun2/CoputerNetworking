#include<stdint.h>
#include<stdio.h>


int main(){

	uint16_t val = 0x400;
	uint8_t* ptr = (uint8_t*) &val;

	if (ptr[0] == 0x40){
		printf("Little Endian\n");
	}
	else if (ptr[1] == 0x40){
		printf("Big Endian\n");
	}
	else{
		printf("I do not know\n");
	}
	return 0;
}